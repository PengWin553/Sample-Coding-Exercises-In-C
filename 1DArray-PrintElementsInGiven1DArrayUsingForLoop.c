#include<stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE] = {1,2,-3,-4,-5};
    int i;
    printf("The negative elements in the given 1D array are:  ");

    for(i=0;i<SIZE;i++)
    {
        if(arr[i]<0)
        {
            printf("%d\t",arr[i]);
        }
    }

    return 0;
}