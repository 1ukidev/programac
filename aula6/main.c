#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[10] = {0};

    short NUM = sizeof(short);
    short B = sizeof(A);
    short total_elementos = B / NUM;

    printf("sizeof(short) = %hd bytes\n", NUM);
    printf("sizeof(A) = %hd bytes\n", B);
    printf("sizeof(A) = %hd elementos\n\n", total_elementos);

    float comp[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};

    NUM = sizeof(float);
    B = sizeof(comp);
    total_elementos = B / NUM;

    printf("sizeof(float) = %hd bytes\n", NUM);
    printf("sizeof(comp) = %hd bytes\n", B);
    printf("sizeof(comp) = %hd elementos\n", total_elementos);

    return EXIT_SUCCESS;
}
