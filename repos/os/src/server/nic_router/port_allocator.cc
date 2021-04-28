/*
 * \brief  Allocator for UDP/TCP ports
 * \author Martin Stein
 * \date   2016-08-19
 */

/*
 * Copyright (C) 2016-2017 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

/* Genode includes */
#include <base/log.h>

/* local includes */
#include <port_allocator.h>

using namespace Net;
using namespace Genode;


bool Net::dynamic_port(Port const port)
{
	return port.value >= Port_allocator::FIRST_PORT;
}


/********************
 ** Port_allocator **
 ********************/

Port Net::Port_allocator::alloc()
{
	for (unsigned nr_of_trials { 0 };
	     nr_of_trials < NR_OF_PORTS;
	     nr_of_trials++) {

		uint16_t const port_offset = _next_port_offset;
		_next_port_offset = (_next_port_offset + 1) % NR_OF_PORTS;
		try {
			_bit_allocator.alloc_addr(port_offset);
			return Port { (uint16_t)(port_offset + FIRST_PORT) };
		}
		catch (Bit_allocator<NR_OF_PORTS>::Range_conflict) { }
	}
	throw Out_of_indices();
}


void Net::Port_allocator::alloc(Port const port)
{
	try {
		_bit_allocator.alloc_addr(port.value - FIRST_PORT);
	}
	catch (Bit_allocator<NR_OF_PORTS>::Range_conflict) {

		throw Allocation_conflict();
	}
}


void Port_allocator::free(Port const port)
{
	_bit_allocator.free(port.value - FIRST_PORT);
}


/**************************
 ** Port_allocator_guard **
 **************************/

Port Port_allocator_guard::alloc()
{
	if (_used_nr_of_ports == _max_nr_of_ports) {
		throw Out_of_indices();
	}
	try {
		Port const port = _port_alloc.alloc();
		_used_nr_of_ports++;
		return port;
	}
	catch (Port_allocator::Out_of_indices) {
		throw Out_of_indices();
	}
}


void Port_allocator_guard::alloc(Port const port)
{
	if (_used_nr_of_ports == _max_nr_of_ports) {
		throw Out_of_indices();
	}
	_port_alloc.alloc(port);
	_used_nr_of_ports++;
}


void Port_allocator_guard::free(Port const port)
{
	_port_alloc.free(port);
	_used_nr_of_ports = _used_nr_of_ports ? _used_nr_of_ports - 1 : 0;
}


Port_allocator_guard::Port_allocator_guard(Port_allocator &port_alloc,
                                           unsigned const  max_nr_of_ports,
                                           bool     const  verbose)
:
	_port_alloc  { port_alloc },
	_max_nr_of_ports {
		min(max_nr_of_ports,
		    static_cast<uint16_t>(Port_allocator::NR_OF_PORTS)) }
{
	if (verbose &&
	    max_nr_of_ports > (Port_allocator::NR_OF_PORTS)) {

		warning("number of ports was truncated to capacity of allocator");
	}
}



/********************
 ** Jitter_entropy **
 ********************/

Jitter_entropy::Jitter_entropy(Genode::Allocator &alloc)
{
	jitterentropy_init(alloc);
	int err = jent_entropy_init();
	if (err) {
		warning("init jitterentropy failed");
		return;
	}

	/* use the default behaviour as specified in jitterentropy(3) */
	_ec_stir = jent_entropy_collector_alloc(0, 0);
	if (!_ec_stir) {
		warning("allocate jitterentropy failed");
		return;
	}
}


Jitter_entropy::~Jitter_entropy()
{
	if (_ec_stir)
		jent_entropy_collector_free(_ec_stir);
}


ssize_t Jitter_entropy::read(char *data, size_t len) const
{
	if (_ec_stir) {
		return jent_read_entropy(_ec_stir, data, len);
	} else {
		return -1;
	}
}


uint16_t Jitter_entropy::read() const
{
	enum { MAX_BUF_LEN = 2 };
	char buffer[MAX_BUF_LEN];
	if (read(buffer, sizeof(buffer)) < 0) {
		warning("could not read entropy");
		return 0;
	}
	return Genode::uint16_t(static_cast<unsigned char>(buffer[0]) << 8 |
	                        static_cast<unsigned char>(buffer[1]));
}
