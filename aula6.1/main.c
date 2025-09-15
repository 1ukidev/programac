#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float precoGasolina = 5.6;
    float precoAlcool = 4.2;

    float gastoGasolina = 0.9;
    float gastoAlcool = 0.7;
    float fator = 0.8;

    float km;
    printf("Digite a distância (km): ");
    scanf("%f", &km);

    printf("\nPreço da gasolina: %.2f\n", precoGasolina);
    printf("Preço do álcool: %.2f\n", precoAlcool);
    printf("Consumo da gasolina: %.2f\n", gastoGasolina);
    printf("Consumo do álcool: %.2f\n\n", gastoAlcool);

    float custoGasolina = (precoGasolina * km) / gastoGasolina;
    float custoAlcool = (precoAlcool * km) / gastoAlcool;

    printf("Custo com gasolina: %.2f\n", custoGasolina);
    printf("Custo com álcool: %.2f\n", custoAlcool);
    if (custoAlcool < custoGasolina) {
        printf("Álcool é mais vantajoso\n");
    } else {
        printf("Gasolina é mais vantajoso\n");
    }

    float outro = precoGasolina * fator;
    if (precoAlcool <= outro) {
        printf("Álcool é mais vantajoso\n");
    } else {
        printf("Gasolina é mais vantajoso\n");
    }

    return EXIT_SUCCESS;
}
