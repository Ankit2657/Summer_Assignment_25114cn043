#include<stdio.h>
int sum(int a,int b) {
    return a+b;
}
int main(){
    int a,b;
    printf("Enter first num :");
    scanf("%d",&a);
    printf("Enter second num :");
    scanf("%d",&b);
    printf("sum=%d",sum(a,b));
    return 0;
}