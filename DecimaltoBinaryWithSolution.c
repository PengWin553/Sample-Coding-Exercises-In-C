#include<stdio.h>
int main()
{
    int decimal;
    int quo, rem2;

    printf("Enter a decimal value:  "); scanf("%d",&decimal);

    int decimal2 = decimal + 0;

    int bi = 0, rem, x = 1;
    while(decimal > 0)
    {
        rem = decimal%2;
        bi = bi + rem * x;
        x = x * 10;
        decimal = decimal/2;
    }

    printf("%d integer = %d Binary\n",decimal2,bi);

    printf("\nSOLUTION:");
    while(decimal2 > 0){
        quo = decimal2/2; 
        rem2 = decimal2%2;
        printf("\n%d/2 =\tQuotient = %d\t\t\t||\tRemainder = %d",decimal2,quo,rem2);
        decimal2 = quo;
    }


}