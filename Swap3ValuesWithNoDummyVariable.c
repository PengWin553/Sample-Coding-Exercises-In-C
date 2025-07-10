#include<stdio.h>
int main()
{
    int a, b,c;

    printf("Enter a number:  "); scanf("%d",&a);
    printf("Enter another number:  "); scanf("%d",&b);
    printf("Enter third number:  "); scanf("%d",&c);


    a = a+b+c; 
    b = a-b-c;
    c = a-b-c;
    a = a-b-c;


    printf("a = %d\nb = %d\nc = %d",a,b,c);

    return 0;
}