#include "stdio.h"

/*
 *
 * Syscalls are not called directly inside of the program
 * Special assembly executes then hands over control to kernel
 *
 * include/linux/syscalls.h
 * 	asmlinkage long sys_mkdir(const char __user *pathname, int mode);
 *
 * sys_mkdir is an example of  syscall
 *
 * strace - cli utility to trace system calls
 *
 * The above is done for CPU permissions for access control
 * Kernel runs at "Ring 0"
 * User programs run at "Ring 3"
 *
 * To transition an interupt happens. Interupts can be software or hardware.
 * `int` assembly instruction is a software based interrupt
 * `rdmsr` reads a special register for CPU instructions
 * `wrmsr` writes to that special register
 */

int main() {

	return 0;
}
