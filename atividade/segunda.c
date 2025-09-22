// Atividade - 2º questão
// Autor: Leonardo Monteiro Moreira
// Matrícula: 202402658328

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
    float vetor[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        printf("\nEndereço do vetor[%d]: %p\n", i, &vetor[i]);
    }

    return EXIT_SUCCESS;
}
