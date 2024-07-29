#include <stdio.h>
#include <stdlib.h> // exit
#include <unistd.h> // fork, getpid

// to execute:~$ ./p1
// fork 사용해보기, 둘 중 무엇이 먼저 실행될지 모름

int main(int argc, char *argv[])
{
    printf("hello world (pid:%d)\n", (int) getpid());
    int ret_fork = fork();
    if (ret_fork < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (ret_fork == 0) {
        // child (new process)
        printf("hello, I am child (pid:%d)\n", (int) getpid());
    } else {
        // parent goes down this path (original process)
        printf("hello, I am parent of %d (pid:%d)\n",
	       ret_fork, (int) getpid());
    }
    return 0;
}
