#include<stdio.h>
#include<math.h>
int main()
{
    int num, reverse, digit;

    printf("Enter a number:  "); scanf("%d",&num);

    reverse = 0;

    while(num>0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num/10;
    }
    printf("\nReverse number:  %d",reverse);

    return 0;
}