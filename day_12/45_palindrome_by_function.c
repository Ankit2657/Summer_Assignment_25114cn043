#include <stdio.h>
int palindrome(int a) {
    int rev = 0, original = a, digit;
    while (a != 0) {
        digit = a % 10;
        rev = rev * 10 + digit;
        a = a / 10;
    }
    if (original == rev) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int a;
    printf("Enter the num: ");
    scanf("%d", &a);
    if (palindrome(a)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
