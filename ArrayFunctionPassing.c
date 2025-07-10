#include<stdio.h>
int sum(int x[]);
int main()
{
    int result,x[100];

    printf("Enter elements of your array:  ");
    for(int i = 0; i<5; i++)
    {
        scanf("%d",&x[i]);
    }

    for(int i = 0; i<5; i++)
    {
        result = sum(x);
        printf("\n%d",result);
    }
    
    return 0;
}
int sum(int x[])
{

    for(int i = 0; i<5; ++i)
    {
        x[i]+=1;
        return x[i];
    }

}