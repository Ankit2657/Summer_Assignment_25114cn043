#include<stdio.h>
int main  (){
    int i,n,power,result=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the power : ");
    scanf("%d",&power);
    for(i=1;i<=power;i++){
    result=result*n;
    }
    printf("%d",result);
    return 0;
}