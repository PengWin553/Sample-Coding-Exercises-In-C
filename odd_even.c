#include<stdio.h>
int main()
{
    int i;

    printf("Enter a number:  "); scanf("%d",&i);

    if(i%2 == 0)
    {
        printf("\nThe number is even");
    }
    else
    {
        printf("\nThe number is odd");
    }

    return 0;
}
