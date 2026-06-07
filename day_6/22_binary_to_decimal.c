#include<stdio.h>
#include<math.h>
int main(){
    int n,i,count=0,remainder,sum=0,original;
    printf("Enter a binary number :");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        n=n/10;
        count++;
    }
    n=original;
    printf("the decimal form of binary is : ");
    for(i=0;i<=count-1;i++){
        remainder=n%10;
        sum=sum+remainder*pow(2,i);
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}