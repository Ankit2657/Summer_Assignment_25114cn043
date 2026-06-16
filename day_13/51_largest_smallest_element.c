#include<stdio.h>
int main()
{
    int arr[5],i,largest,smallest;
    printf("Enter 5 numbers:\n ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    smallest=arr[0];
    for(i=1;i<5;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    return 0;
}