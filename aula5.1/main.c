#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, y, aux;

    printf("Digite o valor de x: ");
    scanf("%i", &x);

    printf("Digite o valor de y: ");
    scanf("%i", &y);

    if (x < y) {
        aux = x;
        x = y;
        y = aux;
    }

    printf("%i %i\n", x, y);

    return EXIT_SUCCESS;
}

