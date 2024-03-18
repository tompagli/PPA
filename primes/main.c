#include <stdio.h>
#include "primes.h"

int main() {
    int count = 0;
    int current_prime = 0;
    scanf("%d %d", &count, &current_prime);
    printf(" Numeros primos no intervalo de %d a %d:\n",count,current_prime);
     for (; count <= current_prime; count++) {
        if ((is_prime(count))==1) {
            printf("%d ", count);
        }
    }
    printf("\n");
    return 0;
}