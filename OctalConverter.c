#include<stdio.h>
int main()
{
    int a, rem[100], j, i = 0, REM;

    printf("Enter number to convert to Octal:  "); scanf("%d",&a); //10
    
    int b = a;   // b = 10
    
    while(a > 0){       // is 10 > 0 TRUE                //is 1 > 0 TRUE               //is 0>0 FALSE
          
        rem[i] = a%8;   // rem[0] = 10%8 || rem[0] = 2   //rem[1] = 1%8 || rem[1] = 1
        a = a/8;        // a = 10/8      || a = 1        // a = 1/8      || a = 0 
        i++;            // 0+1 = 1                       // 1+1 = 2
    }

    printf("\nDecimal: %d = Octal: ",b); //Decimal: 10 = Octal:

    for(j=i-1;j>=0;j--)       //j=i-1 || j=1  >>> is 1>=0 TRUE  //j=0 >>> is 0>=0 TRUE // -1 >= 0 FALSE
    {
        printf("%d",rem[j]);  //rem[1] = 1  >>> j=0             //rem[0] = 2 >>> j=-1
    }

    printf("\n");
    while(b > 0){

        REM = b%8;
        b = b/8; 
        printf("\nQuotient = %d\t\t\t|| Remainder = %d",b,REM);
    }
    
    printf("\n\nRead the remainders from the bottom to the top.");
    return 0;
}