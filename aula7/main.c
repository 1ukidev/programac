#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *array;
    int size, i;

    printf("Quantos números você inserir? ");
    scanf("%d", &size);

    array = (int*) malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Erro\n");
        return EXIT_FAILURE;
    }

    for (i = 0; i < size; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Você inseriu:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return EXIT_SUCCESS;
}
