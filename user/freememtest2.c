#include "kernel/types.h"
#include "user/user.h"
int main()
{
    void *p1, *p2, *p3;
    printf("%d\n", freemem());
    p1 = malloc(1);
    printf("%d\n", freemem());
    p2 = malloc(4095);
    printf("%d\n", freemem());
    p3 = malloc(1);
    printf("%d\n", freemem());
    free(p2);
    printf("%d\n", freemem());
    free(p1);
    printf("%d\n", freemem());
    free(p3);
    printf("%d\n", freemem());
    exit(0);
}