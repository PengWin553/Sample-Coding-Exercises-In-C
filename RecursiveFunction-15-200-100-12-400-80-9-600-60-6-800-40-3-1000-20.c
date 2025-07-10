#include<stdio.h>
//	15    200   100    12   400    80    9   600    60    6    800    40    3    1000    20 
void patterns(int a, int b, int c);
void display(int a, int b, int c);
int main()
{
    int a = 18;
    int b = 0;
    int c = 120;
    patterns(a,b,c);
    return 0;
}
void patterns(int a, int b, int c)
{
    a -= 3;
    b += 200;
    c -= 20;
    if(a < 3)
      return;
    
    display(a,b,c);
}
void display(int a, int b, int c)
{
    printf("%d\t%d\t%d\t",a,b,c);
    patterns(a,b,c);
}