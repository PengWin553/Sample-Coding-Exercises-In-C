#include<stdio.h>
void display1(int x, int y);
void change(int x, int y);
int main()
{
    int x = 2;
    int y = 2;

     display1(x,y);
}
void display1(int x, int y)
{
    if(x>30)
      return;
      
    printf("%d\t",x);
    
    change(x,y);
}
void change(int x, int y)
{
    y+=2;
    x = x+y;
    display1(x,y);
}