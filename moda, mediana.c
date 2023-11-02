#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void seleccionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void encontrarMinYMax(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[n - 1];
}

float calcularMedia(int arr[], int n) {
    int suma = 0;
    int i; 
    for (i = 0; i < n; i++) {
        suma += arr[i];
    }
    return (float)suma / n;
}



float calcularMediana(int arr[], int n) {
    if (n % 2 == 0) {
        return (float)(arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        return arr[n / 2];
    }
}

int calcularModa(int arr[], int n) {
    int moda = arr[0];
    int frecuenciaMax = 1;
    int frecuenciaActual = 1;

   int i;
for (i = 1; i < n; i++) {
    if (arr[i] == arr[i - 1]) {
        frecuenciaActual++;
    } else {
        if (frecuenciaActual > frecuenciaMax) {
            moda = arr[i - 1];
            frecuenciaMax = frecuenciaActual;
        }
        frecuenciaActual = 1;
    }
}


    if (frecuenciaActual > frecuenciaMax) {
        moda = arr[n - 1];
    }

    return moda;
}

void crearHistograma(int arr[], int n) {
    int maxValor = arr[n - 1];
    int minValor = arr[0];
    int rango = maxValor - minValor + 1;

    int *frecuencias = (int *)calloc(rango, sizeof(int));

    int i, j;

for (i = 0; i < n; i++) {
    frecuencias[arr[i] - minValor]++;
}

for (i = 0; i < rango; i++) {
    printf("%2d - %2d: ", minValor + i, minValor + i + 1);
    for (j = 0; j < frecuencias[i]; j++) {
        printf("*");
    }
    printf("\n");
}

free(frecuencias);

}

int main() {
    int N;
    printf("Ingrese la cantidad de elementos (N): ");
    scanf("%d", &N);

    int *arr = (int *)malloc(N * sizeof(int));

    srand(time(NULL));

  int i, j; 

for (i = 0; i < N; i++) {
    arr[i] = rand() % 30 + 1;
}

seleccionSort(arr, N);

int min, max;
encontrarMinYMax(arr, N, &min, &max);

float media = calcularMedia(arr, N);
float mediana = calcularMediana(arr, N);
int moda = calcularModa(arr, N);

printf("Arreglo ordenado: ");
for (j = 0; j< N; j++) {
    printf("%d ", arr[j]);
}
printf("\n");

printf("Arreglo ordenado: ");
for (j = 0; j < N; j++) {
    printf("%d ", arr[j]);
}
printf("\n");

printf("Elemento mas pequeo: %d\n", min);
printf("Elemento mas grande: %d\n", max);
printf("Media: %.2f\n", media);
printf("Mediana: %.2f\n", mediana);
printf("Moda: %d\n", moda);

printf("Histograma:\n");
crearHistograma(arr, N);

free(arr);

return 0;
}
