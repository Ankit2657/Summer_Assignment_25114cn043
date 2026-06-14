#include<stdio.h>
#include<math.h>
int armstrong(int a){
    int count=0,armstrong=0,original,digit;
    original=a;
    while(a!=0){
        a=a/10;
        count++;
    }
    a=original;
    while (a!=0)
    {
     digit=a%10;
     armstrong=pow(a,count)+armstrong; 
     a=a/10;
    }   
    if(armstrong==original){
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main(){
     int a;
    printf("Enter the num: ");
    scanf("%d", &a);
    if (armstrong(a)) {
        printf("The number is a armstrong.\n");
    } else {
        printf("The number is not a armstrong.\n");
    }
    return 0;
}