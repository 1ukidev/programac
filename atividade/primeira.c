#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    int *p_x = &x;
    int *p_y = &y;

    if (p_x > p_y) {
        printf("Endereço de x: %p\n", (void*)p_x);
    } else {
        printf("Endereço de y: %p\n", (void*)p_y);
    }

    return EXIT_SUCCESS;
}
