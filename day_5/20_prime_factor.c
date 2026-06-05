#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The prime factors are:\n");
    for(i = 2; i <= n; i++) {
        if(n % i == 0) {
            isPrime = 1;
            for(j = 2; j <= i/2; j++) {
                if(i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
