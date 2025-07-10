#include<stdio.h>
int main()
{
    int count = 0;
    int num;

    printf("Enter number:  "); scanf("%d",&num);

    while(num != 0)
    {
        count++;
        num = num / 10;
    }

    printf("\nThe number of digits is %d",count);

    return 0;
}