#include<stdio.h>
int get_val();
int main()
{
    int i,j,temp,size,arr[10000];

    size = get_val();

    printf("\nEnter the elements of array:  ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+i;j<size;j++)
        {
            if(arr[i]<arr[j])               // < makes it to descending order (largest to smallest)
            {                               // > makes it to ascending order (smallest to largest)
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nThe array in ascending order is:  ");
    for(i=0;i<size;i++)
    {
        printf("%d   ",arr[i]);
    }

    return 0;
}
int get_val()
{
    int x; printf("Enter the size of your array:  "); scanf("%d",&x); return x;
}