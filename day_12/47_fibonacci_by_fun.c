#include<stdio.h>
void fibonacci(int a)
{
    int sum,n1=0,n2=1;
    for(int i=1;i<=a;i++)
    {
    printf("%d ",n1 );
    sum=n1+n2;
        n1=n2;
        n2=sum;
    }
}
int main (){
    int a;
    printf("Enter the num:");
    scanf("%d",&a);
    fibonacci(a);
    return 0;
}