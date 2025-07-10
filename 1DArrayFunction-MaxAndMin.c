#include<stdio.h>
#define MAX_SIZE 100
int get_size();
void display(int max, int min);
int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;
    
    size = get_size();
    printf("Enter elements in the array:  \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    max = arr[0];
    min = arr[0];
    
    for(i=0;i<size;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
         if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    display(max,min);
}
int get_size()
{
    int size;
    printf("Enter size of the array:  "); scanf("%d",&size); return size;
}
void display(int max, int min)
{
    printf("The maximum element = %d\nThe minimum element = %d",max,min);
}