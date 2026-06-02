#include <stdio.h>
int main ()
{
    int i,n,rev=0;
    printf("Enter the num :");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
    printf("the rev of number is : %d",rev);
    return 0;
}