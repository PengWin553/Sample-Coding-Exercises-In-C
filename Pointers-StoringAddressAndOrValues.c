#include<stdio.h>
int main()
{
    int a,b,*x,*y;

    a = 2;                    
    b = 4;

    x = &a; // x stores the address and points at a && stores the integer value of a
    y = &b; // y stores the address and points at b && stores the integer value of b

    printf("Address of a:  %u",&a);
    printf("\nx is pointing at:  %u\n\n",x);

    printf("Address of b:  %u",&b);
    printf("\ny is pointing at:  %u or %u\n\n",y,&b);

    printf("The value of a and x: %u  %u",a,*y);
    printf("\nThe value of b and y: %u  %u",a,*x);
    
    return 0;

}