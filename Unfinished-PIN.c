#include<stdio.h>
#define PIN 12345
void get_pin(int pin, int i);
int main()
{
    int pin = 0;
    int i = 0;
    get_pin(pin,i);

    return 0;
}
void get_pin(int pin, int i)
{
    int j;
    printf("Enter your pin:  "); scanf("%d",&pin);

    if(pin == PIN)
    {
        printf("\nYou are now logged in.");
    }
    else
    {
        printf("\nYour pin is incorrect. Please try again.   \n");
        for(j=0;j<2;j++)
        {
            if(i<=j)
               get_pin(pin,i+1);
            
        }
    }

}