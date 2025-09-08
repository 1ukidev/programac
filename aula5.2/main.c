#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float f;

    printf("Digite um número: ");
    scanf("%f", &f);

    if (f >= 0.0 && f <= 1.0)
        printf("Está entre 1 e 0\n");

    if (f >= 3.0 && f <= 5.0)
        printf("Está entre 3 e 5\n");

    return EXIT_SUCCESS;
}

