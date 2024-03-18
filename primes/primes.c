#include "primes.h"
#include "stdio.h"
#include <math.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int next_prime(int current) {
    int num = 1;
    while(is_prime(current + num)== 0){
        num++;
    }
    return current + num;
}