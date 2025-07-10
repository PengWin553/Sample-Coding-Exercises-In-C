//MORE COMPLEX VERSION OF PIN PROGRAM: Passing of arguments to another function's parameters
#include<stdio.h>  // We'll be using the functions within this header file
#define PIN 12345 // PIN variable is a constant that stores the value 12345
void get_pin(int pin); //asks for input from the user and checks whether or not it is correct
void main()
{
    int pin = 0;
    get_pin(pin);
}
void get_pin(int pin)
{
    printf("Enter your pin:  "); scanf("%d",&pin);     //12345

    if(pin == PIN) // is 12345  = 12345 true 
    {                                               
        printf("\nYou are now logged in.");
    }
    else
    {
        printf("\nYour pin is incorrect. Please try again.   \n");
        get_pin(pin);
            
    }

}