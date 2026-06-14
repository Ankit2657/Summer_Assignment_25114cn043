#include <stdio.h>
int perfectnum (int a){
    int i,sum=0,digit;
    for(i=1;i<=a/2;i++){
        if(a%i==0){
            sum+=i;
        }
    }
 if(sum==a){
            return 1;
        }
        else
        return 0;
}
int main (){
    int a;
     printf("Enter the num: ");
    scanf("%d", &a);
    if (perfectnum(a)) {
        printf("The number is a perfect number.\n");
    } else {
        printf("The number is not a perfect number.\n");
    }
    return 0;
}