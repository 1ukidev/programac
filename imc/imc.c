// Cálculo de IMC
// Autor: Leonardo Moreira

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "../colors.h"

int main()
{
    float peso, altura, imc;

    printf("Digite o seu peso em kg (ex: 70.5): ");
    scanf("%f", &peso);

    printf("\nQual a sua altura (ex: 1.75): ");
    scanf("%f", &altura);

    imc = (peso / pow(altura, 2));

    if (peso <= 0 || altura <= 0) {
        printf("\nErro: pesos e alturas com valores inválidos.\n");
        return EXIT_FAILURE;
    }

    printf("\nO seu imc é %2.f\n\n", imc);

    if (imc < 18.5) {
        printf(CIANO);
        printf("Abaixo do peso\n\n");
    } else if (imc < 25.0) {
        printf(VERDE);
        printf("Peso normal\n\n");
    } else if (imc < 30.0) {
        printf(AMARELO);
        printf("Sobrepeso\n\n");
    } else if (imc < 35.0) {
        printf(VERMELHO);
        printf("Obsidade Grau I\n");
    } else if (imc < 40.0) {
        printf(VERMELHO);
        printf("Obsidade Grau II (severa)\n\n");
    } else {
        printf(VERMELHO);
        printf("Obesidade Grau III (mórbida)\n\n");
    }
    printf(RESET);

    return EXIT_SUCCESS;
}

