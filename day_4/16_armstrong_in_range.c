#include <stdio.h>
#include <math.h>
int main(){
    int start,end,i,n,count,a,sum,original;
    printf("the start of the range is :");
    scanf("%d",&start);
    printf("the end of the range is :");
    scanf("%d",&end);
    printf("Armstrong num between %d and %d is: \n",start,end);
    for(i=start;i<=end;i++){
        original=i;
        count=0;
        sum=0;
        n=i;
        while(n!=0)
        {
            count++;
            n=n/10;
        }
        n=i;
        while(n!=0)
        {
            a=n%10;
            sum=sum+pow(a,count);
            n=n/10;
        }
        if(sum==original)
        printf("%d\n",original);
    }
    
    return 0;
}