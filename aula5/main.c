#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float x, y;

    printf("Entre com o valor de x: ");
    scanf("%f", &x);

    printf("Entre com o valor de y: ");
    scanf("%f", &y);

    if (x >= y)
        printf("x é maior ou igual que y\n");
    else
        printf("x é menor que y\n");

    return EXIT_SUCCESS;
}

