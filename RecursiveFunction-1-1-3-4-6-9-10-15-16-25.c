#include<stdio.h>
void display1(int a, int b, int c);
void display2(int a, int b, int c);
int main(void)
{
    int a = 1;
    int b = 1;
    int c = 1;

    display1(a,b,c);

    return 0;
}
void display1(int a, int b, int c)
{
    if(a<=15 && b<=5)
    {
        c++;
        display2(a,b,c);
    }
}
void display2(int a, int b, int c)
{
    printf("%d\t",a);
    printf("%d\t",b*b);
    b++;
    a = c+a;

    display1(a,b,c);
}