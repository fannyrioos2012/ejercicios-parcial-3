#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, j, k, repeat = 0, op, temporal;

    srand(time(NULL));

    while (repeat == 0) {
        printf("Que operacion quieres realizar :) ?\n1) Suma<:\n2) Resta <:\n3) Multiplicacion<:\n4) Diagonal<:\n5) Suma Triangular Superior<:\n");
        scanf("%d", &op);

        printf("Ingrese la longitud de la matriz:\n");
        scanf("%d", &n);

        int A[n][n], B[n][n], C[n][n];

        switch (op) {
            case 1:
                printf("Matriz A:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        A[i][j] = rand() % 10 + 1;
                        printf("%d ", A[i][j]);
                    }
                    printf("\n");
                }

                printf("Matriz B:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        B[i][j] = rand() % 10 + 1;
                        printf("%d ", B[i][j]);
                    }
                    printf("\n");
                }

                printf("Matriz C (Resultado):\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        C[i][j] = A[i][j] + B[i][j];
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Matriz A:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        A[i][j] = rand() % 10 + 1;
                        printf("%d ", A[i][j]);
                    }
                    printf("\n");
                }

                printf("Matriz B:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        B[i][j] = rand() % 10 + 1;
                        printf("%d ", B[i][j]);
                    }
                    printf("\n");
                }

                printf("Matriz C (Resultado):\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        C[i][j] = A[i][j] - B[i][j];
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Matriz A:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        A[i][j] = rand() % 10 + 1;
                        printf("%d ", A[i][j]);
                    }
                    printf("\n");
                }

                printf("Matriz B:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        B[i][j] = rand() % 10 + 1;
                        printf("%d ", B[i][j]);
                    }
                    printf("\n");
                }

                printf("Matriz C (Resultado):\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        temporal = 0;
                        for (k = 0; k < n; k++) {
                            temporal += A[i][k] * B[k][j];
                        }
                        C[i][j] = temporal;
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Matriz A:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        A[i][j] = rand() % 10 + 1;
                        printf("%d ", A[i][j]);
                    }
                    printf("\n");
                }

                printf("Diagonal:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        if (i == j) {
                            printf("%d ", A[i][j]);
                        } else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                break;

            case 5:
                
                break;

            default:
                printf("Opción no válida.\n");
                break;
        }

        printf("¿Desea terminar? 1) Si 0) No\n");
        scanf("%d", &repeat);
    }

    return 0;
}

