#include<stdio.h>
int main()
{
    int arr[5],i,sum,avg,a;
    printf("Enter the size of the array: \n");
    scanf("%d",&a);
    printf("Enter %d numbers: \n",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=0;
    for(i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/a;
    printf("Sum: %d\n", sum);
    printf("Average: %d\n", avg);
    return 0;
}