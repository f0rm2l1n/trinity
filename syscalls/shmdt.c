/*
 * SYSCALL_DEFINE1(shmdt, char __user *, shmaddr)
 */
#include "sanitise.h"

struct syscallentry syscall_shmdt = {
	.name = "shmdt",
	.num_args = 1,
	.arg1name = "shmaddr",
	.arg1type = ARG_ADDRESS,
	.extgroup = GROUP_IPC,
};
