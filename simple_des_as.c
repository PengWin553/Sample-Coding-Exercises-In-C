#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter first value:  "); scanf("%d",&a);
    printf("\nEnter second value:  "); scanf("%d",&b);
    printf("\nEnter third value:  "); scanf("%d",&c);

    printf("\nDescending Order:  %d  %d  %d",a,b,c);
    printf("\nAscending Order:  %d  %d  %d",c,b,a);

    return 0;
}