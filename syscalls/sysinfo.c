/*
 * SYSCALL_DEFINE1(sysinfo, struct sysinfo __user *, info)
 */
#include "sanitise.h"

struct syscallentry syscall_sysinfo = {
	.name = "sysinfo",
	.num_args = 1,
	.arg1name = "info",
	.arg1type = ARG_ADDRESS,
	.extgroup = GROUP_MISC,
};
