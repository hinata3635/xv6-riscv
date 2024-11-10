#include "kernel/types.h"
#include "user/user.h"
int main()
{
    printf("%d\n", freemem());
    sbrk(1);
    printf("%d\n", freemem());
    sbrk(4095);
    printf("%d\n", freemem());
    sbrk(1);
    printf("%d\n", freemem());
    sbrk(-4096);
    printf("%d\n", freemem());
    sbrk(-1);
    printf("%d\n", freemem());
    exit(0);
}