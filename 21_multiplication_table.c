#include <stdio.h>
int main(){
    int n,i,mult;
    printf("enter the number to print table :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        mult=n*i;
        printf("%dx%d:%d\n",n,i,mult);
    }
    return 0;

}