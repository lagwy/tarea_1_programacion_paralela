#include <stdio.h>
#include <omp.h>

int main() {
    printf("Hello from the main thread\n");


    #pragma omp parallel
    {
        printf("Hello from thread %d\n", omp_get_thread_num());
    }
}