#include <stdio.h>
#include <stdlib.h>

#define START 1
#define LIMIT 3

int main(void)
{
    double resultado = 0.0;

    for (int i = START; i <= LIMIT; i++) {
        resultado += (1.0 / (i * i));
    }

    printf("Resultado: %lf\n", resultado);

    return EXIT_SUCCESS;
}

