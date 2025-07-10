#include<stdio.h>
#define PIN 12345
int get_pin();
void display(int pin);
int main()
{
    int pin;
    pin = get_pin();
    return 0;
}
int get_pin()
{
    int x;

    printf("Enter your pin:  "); scanf("%d",&x);

    display(x);
}
void display(int pin)
{
    int i=0;
    {
        if(pin == PIN)
        { 
            printf("\nYou are now logged in.");
        }
        else
        {
            printf("\nThe pin you entered was incorrect. Please try again.\n");
            get_pin();
        }
        
    }
    
}