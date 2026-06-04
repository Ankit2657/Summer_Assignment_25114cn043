#include <stdio.h>
#include <math.h>
int main(){
    int n,count=0,a,sum=0,original;
    printf("enter the num :");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        count=count+1;
        n=n/10;
    }
    n=original;
    while(n!=0){
        a=n%10;
        sum=sum+pow(a,count);
        n=n/10;
    }
    if(sum==original){
        printf("the num is a armstrong number\n");
    }
    else{
        printf("the num is not a armstrong number");        
    }
    return 0;
}