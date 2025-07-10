#include<stdio.h>
int main()
{
    int size, i, insert, index;
    
    printf("Enter the size of an array: "); scanf("%d",&size);
    
    int arr[size];
    
    for(i = 0; i < size; i++){
        printf("Enter element for index %d: ",i); scanf("%d",&arr[i]);
    }
    
    printf("\nElements are:  ");
    for(i = 0; i <size; i++){
        printf("\nArray[%d] = %d",i,arr[i]);
    }
    
    printf("\nEnter element to be inserted: "); scanf("%d",&insert);
    
    printf("\nEnter index: "); scanf("%d",&index);

    index+=1;
    
    if(index > size+1 || index < 0){
        printf("\nInvalid index number. Please try again from index: 0 to %d",size);
        printf("\n\n");
        main();
    }
    else{
        for(i = size; i>=index; i-=1){
            arr[i] = arr[i-1];
        }

        arr[index - 1] = insert;
        size+=1;

        printf("\nElements after insertion: \n");
        for(i=0;i<size;i++)
        {
            printf("Array[%d] = %d\n",i,arr[i]);
        }
    }
    
    
    return 0;
    
}
