#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int escolha;

    printf("Escolha sua bebida: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Você escolheu água.\n");
            break;
        case 2:
            printf("Você escolheu refrigerante.\n");
            break;
        case 3:
            printf("Você escolheu suco.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return EXIT_SUCCESS;
}
