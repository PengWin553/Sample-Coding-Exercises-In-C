#include<stdio.h>
int main()
{
    int x, y=0,rem,quo;
    printf("DECIMAL TO BINARY CONVERTER");
    printf("\nEnter a number:  "); scanf("%d",&x);

    while(x > 0)
    {
        y = 2;
        quo = x/y; rem = x%y;
        printf("\n%d/%d\t\tQuotient = %d \t\tRemainder = %d",x,y,quo,rem);
        x = quo;
    }

    return 0;
}