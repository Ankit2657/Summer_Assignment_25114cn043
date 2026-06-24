#include<stdio.h>
int main()
{
    int arr[5],i,search,found=0;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to search: ");
    scanf("%d",&search);
    for(i=0;i<5;i++)
    {
        if(arr[i]==search)
        {
            found=1;
            break;
        }
    }
    if(found)
    {
        printf("%d is found in the array.\n", search);
    }
    else
    {
        printf("%d is not found in the array.\n", search);
    }
    return 0;
}
//not complete
