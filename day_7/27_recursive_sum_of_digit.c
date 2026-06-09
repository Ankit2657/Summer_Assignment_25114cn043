#include<stdio.h>
int digit (int n){
    if(n==0){
        return 0;
    }
    else {
        return (n%10)+digit(n/10);
    }
}
int main (){
    int sum ,n;
    printf("Enter a number :");
    scanf("%d",&n);
    
    printf("%d",digit(n));
    return 0;
}