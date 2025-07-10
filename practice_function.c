#include<stdio.h>
int get_value();
int compute(int m, int n);
void display(int x);

int main()
{
    int a, b, c, mul;

    a = get_value();
    b = get_value();

    mul = compute(a,b);
    display(mul);
}
int get_value()
{
    int value;

    printf("Enter value:  "); scanf("%d",&value);

    return value;
}
int compute(int m, int n)
{
    int w;

    w = m * n;

    return w;
}
void display(int x)
{
    printf("\nTotal is %d",x);
}