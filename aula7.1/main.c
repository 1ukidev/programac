#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    int *p, **p2;
    x = 10;
    p = &x;
    p2 = &p;

    printf("Conteúdo de p2: %d\n", p2);
    printf("Conteúdo em que p2 aponta: %d\n", **p2);
    printf("Conteúdo em que p aponta: %d\n", *p);

    return EXIT_SUCCESS;
}
