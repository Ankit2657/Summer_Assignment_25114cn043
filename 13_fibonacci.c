#include <stdio.h>
int main(){
    int i,n,num1=0,num2=1,next;
    printf("Enter the num for the fibonacci series :");
    scanf("%d",&n);
    printf("febonacci series is :\n" );
    for (i=0 ; i < n ;i++) {
        printf("%d ", num1);
        next = num1 + num2;
        num1 = num2;
        num2= next;
       }
          return 0;
}