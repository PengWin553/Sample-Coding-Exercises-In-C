#include<stdio.h>
int main()
{
    int arr[100], size, index, element, i;

    printf("Enter the size of your array:  "); scanf("%d",&size);

    printf("\nEnter elements of your array:  \n"); 
    for(i = 0; i < size; i++){
        printf("\nArray [%d]:  ",i); scanf("%d",&arr[i]);
    }

    printf("\nThe elements of your array:  \n");
    for(i = 0; i <=size-1; i++){
        printf("Array [%d]:  %d\n",i,arr[i]);
    }

    printf("\nEnter element to insert:  "); scanf("%d",&element);
    printf("\nEnter index to insert element:  "); scanf("%d",&index);

    for(i=size; i>=index; i--){
        arr[i] = arr[i-1];
    }

    arr[index] = element;

    printf("\nYour new array is now:  \n");
    for(i = 0; i <=size; i++){
        printf("Array [%d]:  %d\n",i,arr[i]);
    }

    return 0;
}