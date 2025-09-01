#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i;
    double x[3] = {1.2, 2, 3};
    int y[] = {1, 2, 5};
    int z[8] = {1, 2, 3};

    for (i = 0; i < 3; i++) {
        printf("x[%d] = %f\n", i, x[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("y[%d] = %d\n", i, y[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++) {
        printf("z[%d] = %d\n", i, z[i]);
    }

    return EXIT_SUCCESS;
}
