#include<stdio.h>
int get_val();
void display(int neg);
int main()
{
    int i,size,arr[100],arrr;

    size = get_val();
    
    printf("Enter the elements of your array:  \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The negative values of your array are:  ");
    
    for(i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            arrr = arr[i];
            display(arrr);
        }
    }
}
int get_val()
{
    int x; printf("Enter the size of your array:  "); scanf("%d",&x); return x;
}
void display(int neg)
{
    printf("%d\t",neg);
}