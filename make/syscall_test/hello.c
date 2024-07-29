#include <linux/kernel.h>
#include <linux/syscalls.h>

/*
	/kernel 에 추가될 함수
	
	arm64 기준, 다음 파일 추가 수정 필요
	vi include/uapi/asm-generic/unistd.h 
	vi include/linux/syscalls.h
	vi kernel/Makefile
*/

SYSCALL_DEFINE1(hello, int, stdnum) {
	printk("[New System Call 449] I'm %d. Hello, world!\n", stdnum);
	return 0;
}