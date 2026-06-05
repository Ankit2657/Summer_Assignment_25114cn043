#include <stdio.h>
int main (){
    int n,i,a,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            i=a;
            sum=sum+a;
        }
    }
    if(a==sum){
        printf("The number is a perfect number");
    }
    else{
        printf("The number is not a perfect number");

    }
    return 0;
}