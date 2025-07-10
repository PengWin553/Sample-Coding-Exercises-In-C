#include<stdio.h> // •	3   10   6    8   9    6    12    4    15    2
int patterns(int x, int y);
void display(int x, int y);
int main()
{
    int x = 0;
    int y = 12;

    patterns(x,y);
    return 0;
}
int patterns(int x, int y)
{
    x+=3;
    y-=2;
    if(x>15)
      return 0;
    display(x,y);
}
void display(int x, int y)
{
    printf("%d\t%d\t",x,y);
    patterns(x,y);
}