#include<stdio.h>
int add100(int x);
void display(int x);
int main()
{
    int added, x[100];

    printf("Enter elements:  \n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\nThe results of each element added by 100 are:  \n");

    for(int j = 0; j < 5; j++)
    {
        added = add100(x[j]);
        display(added);
    }
    
    return 0;
}
int add100(int x)
{
    int added;

    added = x + 100;
        
    return added;
}
void display(int x)
{
    printf("%d\n",x);
}