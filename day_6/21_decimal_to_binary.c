#include <stdio.h>
int main (){
    int n,reminder,i=0,j,binary[32];
    printf("Enter a decimal number :");
    scanf("%d",&n);
    while(n>0){
        reminder=n%2;
        binary[i]=reminder;
        i++;
        n=n/2;
    }
    for(j=i-1;j>0;j--){
        printf("%d ",binary[j]);
    }
    return 0;
}