#include<stdio.h>
int main()
{
    int a,b,c,sum;

    printf("Enter first number:  "); scanf("%d",&a);
    printf("Enter second number:  "); scanf("%d",&b);
    printf("Enter third number:  "); scanf("%d",&c);

    sum = a + b + c;

    printf("\nTotal value is %d",sum);

    return 0;
}