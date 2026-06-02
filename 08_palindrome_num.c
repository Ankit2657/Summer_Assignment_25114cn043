#include <stdio.h>
int main ()
{
    int i,n,rev=0,original;
    printf("Enter the num :");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    
    }
        if(original==rev)
    {
        printf("the num is a palindrome number\n");
    }
    else
    {
        printf("the num is not a palindrome number");

    }
    
    return 0;
}