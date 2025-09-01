#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define N 2
#define MAX_IT 100
#define TOL 1e-6

int main(void)
{
    double A[N][N] = {
        {4, 1},
        {2, 3}
    };
    double b[N] = {15, 10};
    double x[N] = {0, 0};

    double x_new[N];
    int k, i, j;
    double soma, erro;

    for (k = 0; k < MAX_IT; k++) {
        for (i = 0; i < N; i++) {
            soma = 0;
            for (j = 0; j < N; j++) {
                if (j != i) soma += A[i][j] * x[j];
            }
            x_new[i] = (b[i] - soma) / A[i][i];
        }

        erro = 0;
        for (i = 0; i < N; i++) {
            erro += fabs(x_new[i] - x[i]);
            x[i] = x_new[i];
        }

        if (erro < TOL) break;
    }

    printf("Solução aproximada: \n");
    for (i = 0; i < N; i++) {
        printf("x[%d] = %.2f\n", i, x[i]);
    }

    return EXIT_SUCCESS;
}
