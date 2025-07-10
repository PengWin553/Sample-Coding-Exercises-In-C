//SIMPLER VERSION OF PIN PROGRAM
#include<stdio.h>  // We'll be using the functions within this header file
#define PIN 12345 // PIN variable is a constant that stores the value 12345
int main()
{
    int pin;

    printf("Enter the PIN:  "); scanf("%d",&pin);

    if(pin == PIN)
    {
        printf("\nYou are now logged in.");
    }
    else
    {
        printf("\nYour pin is incorrect. Please try again.   \n");
        main();
            
    }

    return 0;
}
