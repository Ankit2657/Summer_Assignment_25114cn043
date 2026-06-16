#include<stdio.h>
int main()
{
    int arr[5],i,even_count=0,odd_count=0;
    printf("Enter 5 numbers:\n ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);
    return 0;
}