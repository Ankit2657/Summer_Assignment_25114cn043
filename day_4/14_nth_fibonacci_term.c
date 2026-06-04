#include <stdio.h>
int main (){
    int i,num1=0,num2=1,sum,n;
    printf("Enter the term :");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d",num1);
    }
    else if(n==1){
        printf("%d",num2);
    }
    else
    {
        for(i=2;i<=n;i++)
        {
        sum=num1+num2;
        num1=num2;
        num2=sum;
        }
        printf("%d",num1);
    }

    return 0;
}