#include<stdio.h>
int get_decimal();
long convert(int decimal);
void display(int decimal, long binary);
int main()
{
    int deci, bi;

    deci = get_decimal();
    bi = convert(deci);
    display(deci,bi);
}
int get_decimal()
{
    printf("***DECIMAL TO BINARY CONVERTER***");
    int x; printf("Enter a decimal number:  "); scanf("%d",&x); return x;
}
long convert(int decimal)
{
    long bi = 0, rem, x = 1;
    while(decimal > 0)
    {
        rem = decimal%2;
        bi = bi + rem * x;
        x = x * 10;
        decimal = decimal/2;
    }
    return bi;
}
void display(int decimal, long binary)
{
    int quo,rem;

    printf("\n%d decimal = %d binary",decimal,binary);

    printf("\n\nSOLUTION:");
    while(decimal > 0){
        quo = decimal/2; 
        rem = decimal%2;
        printf("\nQuotient = %d\t\t\t||\t\tRemainder = %d",quo,rem);
        decimal = quo;
    }

    printf("\n\nNOTE: THE SOLUTION'S REMAINDERS MUST BE READ FROM THE BOTTOM TO THE TOP.");

}