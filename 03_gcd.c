#include <stdio.h>
int main (){
    int a,b,i;
    printf("Enter the first num :");
    scanf("%d",&a);
    printf("Enter the second num :");
    scanf("%d",&b);
    while (b!=0)
    {
        i=b;
        b=a%b;
        a=i;
    }
    printf("the gcd of the num is:%d ",a);
    return 0;
}