#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void mostrarFibonacciRecursivo(int n, int i) {
    if (i == n) {
        printf("%d\n", fibonacci(i));
    } else {
        printf("%d, ", fibonacci(i));
        mostrarFibonacciRecursivo(n, i + 1);
    }
}

int main() {
    int n;

    printf("Ingrese el número de términos de la Serie Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El número de términos debe ser positivo.\n");
    } else {
        printf("Los primeros %d números de la Serie Fibonacci: ", n);
        mostrarFibonacciRecursivo(n - 1, 0);
    }

    return 0;
}

