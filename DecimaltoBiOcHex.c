#include<stdio.h>
#define MAX_SIZE 1000
int main(void)
{
    int a,quo,rem,i = 0, I = i, j, J = j, bo[MAX_SIZE];
    char x;

    printf("**DECIMAL TO BINARY OR OCTAL OR HEXADECIMAL CONVERTER**");
    printf("\n\nA. BINARY     B. OCTAL     C. HEXADECIMAL"); 
    printf("\nEnter the letter of your choice:  "); scanf("%c",&x);
    printf("\n\nEnter number to convert:  "); scanf("%d",&a);
   
    int A = a;

    if((x == 'a') || (x == 'A')){

        printf("\n\n---DECIMAL TO BINARY---\n");
        while(a > 0)
        {
            bo[i] = a%2;
            a = a/2;
            i++;
        }

        printf("\nDecimal:  %d\nBinary:  ",A);
        for(j=i-1;j>=0;j--)
        {
            printf("%d",bo[j]);
        }

        printf("\n\nSOLUTION:  ");
        while(A > 0){
           quo = A/2;
           rem = A%2;
           printf("\nQuotient: %d/2 = %d\t\t\t|| Remainder = %d",A,quo,rem);
           A = quo;
        }

        printf("\n\nRead the remainders from the bottom to the top.");

    }
    else if ((x == 'b') || (x == 'B')){

        printf("\n\n---DECIMAL TO OCTAL---\n");
        while(a > 0)
        {
            bo[i] = a%8;
            a = a/8;
            i++;
        }

        printf("\nDecimal:  %d\nOctal:  ",A);
        for(j=i-1;j>=0;j--)
        {
            printf("%d",bo[j]);
        }

        printf("\n\nSOLUTION:");
        while(A > 0){
           quo = A/8;
           rem = A%8;
           printf("\nQuotient: %d/8 = %d\t\t\t|| Remainder = %d",A,quo,rem);
           A = quo;
        }

        printf("\n\nRead the remainders from the bottom to the top.");
    }
    else if ((x == 'c') || (x == 'C'))
    {
         printf("\n\n---DECIMAL TO HEXADECIMAL---\n");
        printf("\nDecimal:  %d\nHexadecimal:  %x",a,a);

        printf("\n\nSOLUTION:");
        while(A > 0){
           quo = A/16;
           rem = A%16;
           printf("\nQuotient: %d/8 = %d\t\t\t|| Remainder = %d",A,quo,rem);
           A = quo;
        }

        printf("\n\nRead the remainders from the bottom to the top.");
    }
    else
    {
        printf("\n\nInvalid letter");
    }
    
    return 0;
}