#include <stdio.h>
#include <math.h> 

int isPrime(int i) {
    if (i < 2) return 0;
    
    for (int j = 2; j <= sqrt(i); j++) {  
        if (i % j == 0) {
            return 0; 
        }
    }
    return 1;  
}

int main() {
    int n = 20;

    printf("Prime numbers up to %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
