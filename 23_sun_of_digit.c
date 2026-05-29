#include <stdio.h>
int main ()
{
    int i,n,sum=0;
    printf("Enter the num :");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("the sum of digit is :%d",sum);
    return 0;
}