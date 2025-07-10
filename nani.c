#include<stdio.h>
int main()
{
    int x,y = 0,quo,rem;
    char z[1];
    printf("DECIMAL TO BINARY OR OCTAL CONVERTER");
    printf("\n\nDecimal to ___? : A. Binary   B. Octal"); printf("\nEnter Option:  "); scanf("%s",&z);
    printf("\nEnter a decimal value:  "); scanf("%d",&x);
    printf("\n\nSOLUTION:  ");
    if(strcmp(z,"A")==0)
    { while(quo > 0)
    {
        y = 2;
        quo = x / y; rem = x % y;
        printf("\n%d / %d: Quotient = %d, Remainder = %d",x,y,quo,rem);
        x = quo;
    }
    }
    else if(strcmp(z,"B")==0)
    { while(quo > 0)
    {
        y = 8;
        quo = x / y; rem = x % y;
        printf("\n%d / %d: Quotient = %d, Remainder = %d",x,y,quo,rem);
        x = quo;
    }
    }
    else
    {
        printf("\nInvalid Option.");
    }
    printf("\n\nNOTE: The remainders must be read upwards.");
    return 0;
}