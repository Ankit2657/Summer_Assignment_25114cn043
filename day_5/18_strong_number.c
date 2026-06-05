#include<stdio.h>
int main(){
    int sum=0,n,i,temp,a,fact;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
     while (temp>0)
        {
            a=temp%10;
            fact=1;
            
            for(i=1;i<=a;i++){
                fact*=i;
                sum=sum+fact;
                temp/=10;
            }
        }
    if(sum==n){
        printf("The number is a strong number");
    }
    else{
        printf("The number is a strong number");
    }
    return 0;
}