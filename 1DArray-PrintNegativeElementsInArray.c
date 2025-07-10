#include<stdio.h>
int main()
{
    int i, x, y[100];
    printf("Enter the size of the array:  ");
    scanf("%d",&x);
    
    printf("Enter elements in array: \n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
    }
    
    printf("\nAll the negative elements in the array are:  \n");
    for(i=0;i<x;i++)
    {
        if(y[i]<0)
        {
            printf("%d\n",y[i]);
        }
    }
    
    return 0;
}