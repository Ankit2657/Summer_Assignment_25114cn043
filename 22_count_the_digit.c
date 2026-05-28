#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0){
        sum=sum+1;
        n=n/10;
    }
    printf("sum of digit %d",sum);
    return 0;
}