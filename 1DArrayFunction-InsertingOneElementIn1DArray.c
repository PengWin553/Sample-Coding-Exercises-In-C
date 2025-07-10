#include<stdio.h>
#define MAX_SIZE 100
int get_size();
int main()
{
    int i,size,num,pos;
    int arr[MAX_SIZE];

    size = get_size();

    printf("\nEnter elements in the array:  \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter number to insert:  "); scanf("%d",&num);
    printf("\nEnter position to insert number:  "); scanf("%d",&pos);

    if(pos > size+1 || pos < 0)
    {
        printf("\nInvalid position. Please enter values from 1 to %d.",size);
    }
    else
    {
        for(i=size;i>=pos;i--)
        {
            arr[i] = arr[i-1];
        }

        arr[pos-1] = num;
        size++;

        printf("\nArray elements after insertion:  ");
        for(i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
    }

    return 0;
}
int get_size()
{
    int size;

    printf("Enter size of array:  "); scanf("%d",&size); return size;
}