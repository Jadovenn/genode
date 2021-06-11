/*
 * \brief  Time backend for jitterentropy library
 * \author Josef Soentgen
 * \author Pirmin Duss
 * \date   2021-03-08
 */

/*
 * Copyright (C) 2014-2017 Genode Labs GmbH
 * Copyright (C) 2021 gapfruit AG
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

#ifndef _JITTERENTROPY_ARMHF_V7_BASE_GENODE_NSTIME_H_
#define _JITTERENTROPY_ARMHF_V7_BASE_GENODE_NSTIME_H_

static inline void jent_get_nstime(__u64 *out) {

	struct timeval
	{
		long tv_sec;      /* Seconds */
		long tv_usec;     /* Microseconds */
	};

	struct timeval  tv;
	struct timeval *ptr = &tv;

	// system call implementation
	int res = 0;
	__asm__ volatile(
		R"(
			stmfd  sp!,    {r4, r7}
			mov    r0,     #1          // CLOCK_MONOTONIC
			mov    r1,     %[in]       // pointer to tv structure where time is stored
			mov    r7,     #263        // system call number SYS_clock_gettime
			svc    0                   // system call in to the kernel
			ldmfd  sp!,    {r4, r7}
			mov    %[out], r0          // Return value of syscall will be available in r0 for ARM EABI
		)"
		: [out]"=r"(res)               // output parameters
		: [in]"r"(ptr)                 // input parameters
		: "memory"                     // clobbers
	);

	if (res != 0) {
		*out = 0;
		return;
	}

	*out = tv.tv_sec * 1000000 + tv.tv_usec;
}

#endif /* _JITTERENTROPY_ARMHF_V7_BASE_GENODE_NSTIME_H */
