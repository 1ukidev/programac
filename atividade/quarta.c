#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void atualizar(int* vetor, int* valor)
{
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = *valor;
    }
}

int main(void)
{
    int *x;
    x = (int*) malloc(sizeof(int));

    printf("Digite um valor inteiro: ");
    scanf("%d", x);

    int vetor[SIZE];
    atualizar(vetor, x);

    for (int i = 0; i < SIZE; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return EXIT_SUCCESS;
}
