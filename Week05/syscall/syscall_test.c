#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int main() {
    int n = (int) syscall(449, 202002473);
    printf("syscall return: %d\n", n);
    return 0;
}
