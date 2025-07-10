#include<stdio.h>
double get_val();
double posneg(double x);
void display(double x, char a, char b, char c, char d, char e, char f, char g, char h);

int main()
{
    double num = get_val();
    double posOrNeg = posneg(num);

    return 0;
}

double get_val()
{
    double x;

    printf("Enter a number:  "); scanf("%lf",&x); return x;
}

double posneg(double x)
{
    if(x < 0)
      display(x,'N','E','G','A','T','I','V','E');
    else if(x > 0)
      display(x,'P','O','S','I','T','I','V','E');
    else if(x == 0)
      display(x,'Z','E','R','O',' ',' ',' ',' ');
    else
      display(x,'I','N','V','A','L','I','D',' ');
    
}

void display(double x, char a, char b, char c, char d, char e, char f, char g, char h)
{
    printf("%.2lf = %c%c%c%c%c%c%c%c",x,a,b,c,d,e,f,g,h);
}

