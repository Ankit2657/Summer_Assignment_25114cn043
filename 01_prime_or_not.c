#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("Enter the num :");
    scanf("%d",&n);
    if(n<=1){
        printf("not prime\n");
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            a=1;
        }
       
    }
       if (a==0) {
            printf("prime number\n");
        }
            else
        {
            printf("not a prime number\n");
        }
    return 0;

}