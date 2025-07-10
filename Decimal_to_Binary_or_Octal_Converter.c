#include<stdio.h>
int main()
{
    int a,quo,rem;

    char x;

    printf("**DECIMAL TO BINARY OR OCTAL CONVERTER**");
    printf("\n\nA. BINARY     B. OCTAL"); 
    printf("\nEnter the letter of your choice:  "); scanf("%c",&x);
    printf("\n\nEnter number to convert:  "); scanf("%d",&a);

    if((x == 'a') || (x == 'A')){
       while(a > 0){
           quo = a/2; 
           rem = a%2;
           printf("\nQuotient = %d\t\t\t|| Remainder = %d",quo,rem);
           a = quo;
       }
    }
    else if ((x == 'b') || (x == 'B')){
        while(a > 0){
           quo = a/8; 
           rem = a%8;
           printf("\nQuotient = %d\t\t\t|| Remainder = %d",quo,rem);
           a = quo;
       }
    }
 printf("\n\nRead the remainders from the bottom to the top.");

    return 0;
}