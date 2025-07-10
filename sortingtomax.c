#include<stdio.h>
int main()
{
    int max = 0, arr[200];
    printf("\nEnter elements of array:  \n");
    for(int elem = 0; elem < 4; elem++)
    {
        scanf("%d\n",&arr[elem]);
    }

    max = arr[0];
    for(int i = 0; i < 5; i++)
    {
        
        if(arr[i] > max)
          max = arr[i];
    }

    printf("\nMax:  %d",max);
}