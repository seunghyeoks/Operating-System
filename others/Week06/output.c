#include <stdio.h>

int main()
{
    char buf[64];
    fgets(buf, 64, stdin);
    printf("input : %s", buf);
    return 0;
}
