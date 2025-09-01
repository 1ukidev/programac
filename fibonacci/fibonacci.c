#include <stdlib.h>
#include <stdio.h>

#define SIZE 10

int fibonacci(int x)
{
    if (x <= 1) {
        return x;
    } else {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}

int main(void)
{
    int vetor[SIZE];

    for (int i = 0; i < SIZE; i++) {
        vetor[i] = fibonacci(i);
    }

    for (int i = 0; i < SIZE; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    int soma = vetor[6] + vetor[9];
    printf("Sétimo com o último: %d\n", soma);

    return EXIT_SUCCESS;
}
