#include<stdio.h>
void main()
{
    int amount = 10000, deposit, withdraw, choice, pin, k;

    
    while (pin !=123456)
    {
        printf("\nEnter pin:  "); scanf("%d",&pin);
        if(pin != 123456)
        {
            printf("\nEnter valid pin:  "); scanf("%d",&pin);
        }
    }
    do
    {
        printf("\nWelcome to ATM Service");
    }
    

}