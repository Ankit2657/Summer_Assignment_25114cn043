#include<stdio.h>
int main(){
    int a,sum=0;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        sum=sum+i;
    }
    printf("The sum of all num upto %d is %d",a,sum);
    return 0;
}