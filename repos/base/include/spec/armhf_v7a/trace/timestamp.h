/*
 * \brief  Trace timestamp
 * \author Stefan Kalkowski
 * \author Pirmin Duss
 * \date   2013-08-20
 *
 * Serialized reading of performance counter on ARM.
 */

/*
 * Copyright (C) 2013-2017 Genode Labs GmbH
 * Copyright (C) 2021 gapfruit AG
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

#ifndef _INCLUDE__SPEC__ARM_V7__TRACE__TIMESTAMP_H_
#define _INCLUDE__SPEC__ARM_V7__TRACE__TIMESTAMP_H_

#include <base/fixed_stdint.h>

//using Genode::log;

namespace Genode { namespace Trace {

	using Timestamp = uint32_t;

	struct timeval
	{
		int32_t tv_sec;      /* Seconds */
		int32_t tv_usec;     /* Microseconds */
	};

	inline Timestamp timestamp()
	{
		struct timeval  tv;
		struct timeval *ptr = &tv;

		// system call implementation
		int res = 0;
		__asm__ volatile(
			R"(
				stmfd sp!,    {r4, r7}
				mov   r0,     #1         // CLOCK_MONOTONIC
				mov   r1,     %[in]      // pointer to tv structure where time is stored
				mov   r7,     #263       // system call number SYS_clock_gettime
				svc   0                  // system call in to the kernel
				ldmfd sp!,    {r4, r7}
				mov   %[out], r0         // Return value of syscall will be available in r0 for ARM EABI
			)"
			: [out]"=r"(res)             // output parameters
			: [in]"r"(ptr)               // input parameters
			: "memory"                   // clobbers
		);

		if (res != 0) return 0;

		return tv.tv_sec * 1000000 + tv.tv_usec;

	}
} }

#endif /* _INCLUDE__SPEC__ARM_V7__TRACE__TIMESTAMP_H_ */
