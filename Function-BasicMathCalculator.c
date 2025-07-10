#include<stdio.h>
int get_val(char a, char b, char c);
int remaindEr(int x, int y);
int quotient(int x, int y);
int difference(int x, int y);
int product(int x, int y);
int total(int x, int y);
void display(int rem1, int quo1, int dif1, int pro1, int sum1);

int main()
{
    int a,b,rem,quo,dif,pro,sum;
    a = get_val('1','s','t');
    b = get_val('2','n','d');
    rem = remaindEr(a,b);
    quo = quotient(a,b);
    dif = difference(a,b);
    pro = product(a,b);
    sum = total(a,b);
    display(rem,quo,dif,pro,sum);
}
int get_val(char a, char b, char c)
{ int x;printf("Enter %c%c%c value:  ",a,b,c); scanf("%d",&x);return x;}
int remaindEr(int x, int y)
{int rem; rem = x%y; return rem;}
int quotient(int x, int y)
{int quo;quo = x/y;return quo;}
int difference(int x, int y)
{int dif;dif = x - y;return dif;}
int product(int x, int y)
{int pro;pro = x * y;return pro;}
int total(int x, int y)
{int sum;sum = x + y;return sum;}
void display(int rem1,int quo1, int dif1,int pro1,int sum1)
{
    printf("Remainder: %d\tQuotient = %d\tDifference = %d\tProduct = %d\tSum = %d",rem1,quo1,dif1,pro1,sum1);
}







