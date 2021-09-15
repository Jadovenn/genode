/*
 * \brief  Test component for the directory watch feature of the `lx_fs` server.
 * \author Sid Hussmann
 * \date   2021-09-16
 */

/*
 * Copyright (C) 2013-2020 Genode Labs GmbH
 * Copyright (C) 2021 gapfruit AG
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */


#include <base/component.h>
#include <file_system_session/connection.h>
#include <base/heap.h>


namespace Test_lx_fs_notify
{
	using namespace Genode;

	class Main;
};


class Test_lx_fs_notify::Main
{
	private:

		Env&                      _env;
		Heap                      _heap           { _env.ram(), _env.rm() };
		Allocator_avl             _fs_alloc       { &_heap };
		Signal_handler<Main>      _packet_handler { _env.ep(), *this, &Main::_handle_packet };
		File_system::Connection   _fs             { _env, _fs_alloc };
		File_system::Watch_handle _watch_handle   { _fs.watch(File_system::Path("/test")) };

		void _handle_packet()
		{
			File_system::Session_client::Tx::Source &source = *_fs.tx();

			while (source.ack_avail()) {

				File_system::Packet_descriptor pkt = source.get_acked_packet();

				if (pkt.operation() == File_system::Packet_descriptor::CONTENT_CHANGED) {

					// notify the client of the change
					if ((pkt.handle() == _watch_handle))
						log("directory content changed");
				}

				source.release_packet(pkt);
			}
		}

	public:

		Main(Env& env) : _env { env }
		{
			_fs.sigh_ack_avail(_packet_handler);

			log("wait for directory content to change");
		}
};


void Component::construct(Genode::Env& env)
{
	static Test_lx_fs_notify::Main main { env };
}
