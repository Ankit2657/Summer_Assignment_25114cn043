#include <stdio.h>
int main() {
    int num1, num2, LCM, gcd, a, b,temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    a = num1;
    b = num2;
    while (b!= 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    LCM = (num1 * num2) / gcd;
     printf("LCM of %d and %d is: %d\n", num1, num2, LCM);
     return 0;
}
