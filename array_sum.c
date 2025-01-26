#include <stdio.h>
#include <omp.h>

// Define precompilation constants
#define N 1000          // Amount of elements in the arrays
#define chunk 100       // Chunk size that each thread will handle
#define mostrar 10      // Amount of elements to show in the output

// Function prototypes
void imprimeArreglo(float *d);


int main() {
    printf("Sumando Arreglos en Paralelo!\n");
    float a[N], b[N], c[N];
    int i;

    // Initialize arrays with random data
    for (i = 0; i < N; i++) {
        a[i] = i * 10;
        b[i] = (i + 3) * 3.7;
    }

    int pedazos = chunk;

    // Perform the addition in parallel
    #pragma omp parallel for shared(a, b, c, pedazos) private(i) schedule(static, pedazos)
    for (i = 0; i < N; i++) c[i] = a[i] + b[i];

    // Print the first mostrar elements of the arrays
    printf("Imprimiendo los primeros %d valores del arreglo a: \n", mostrar);
    imprimeArreglo(a);
    printf("Imprimiendo los primeros %d valores del arreglo b: \n", mostrar);
    imprimeArreglo(b);
    printf("Imprimiendo los primeros %d valores del arreglo c: \n", mostrar);
    imprimeArreglo(c);
}

// Function to print the first mostrar elements of an array
void imprimeArreglo(float *d) {
    for (int x = 0; x < mostrar; x++) {
        printf("%f - ", d[x]);
    }
    printf("\n");
}
