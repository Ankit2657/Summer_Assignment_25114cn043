#include<stdio.h>
int max(int a,int b){
if (a>b){
    return a;
}
else
return b;
}
int main (){
    int a,b;
    printf("Enter first num :");
    scanf("%d",&a);
    printf("Enter second num :");
    scanf("%d",&b);
    printf("%d is max",max(a,b));
    return 0;
}