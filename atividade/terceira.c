// Atividade - 3º questão
// Autor: Leonardo Monteiro Moreira
// Matrícula: 202402658328

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
    int vetor[SIZE];
    int *x;
    x = (int*) malloc(sizeof(int));

    for (int i = 0; i < SIZE; i++) {
        printf("Digite o valor de %d: ", i + 1);
        scanf("%d", x);
        vetor[i] = *x;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", vetor[i] * 2);
    }

    return EXIT_SUCCESS;
}
