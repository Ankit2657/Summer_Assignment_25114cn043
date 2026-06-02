#include <stdio.h>
int main ()
{
    int i,n,product=1;
    printf("Enter the num :");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        product=product*i;
        n=n/10;
    }
    printf("the rev of number is : %d",product);
    return 0;
}