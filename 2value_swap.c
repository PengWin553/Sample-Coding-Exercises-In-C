#include<stdio.h>
int main()
{
    int a,b,dummy;

    printf("Enter first number:  "); scanf("%d",&a);
    printf("Enter second number:  "); scanf("%d",&b);

    dummy = a;
    a = b;
    b = dummy;

    printf("\na = %d\tb = %d",a,b);

    return 0;
}