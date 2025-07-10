#include<stdio.h>
int get_val();
int dec(int x);
void display(char a, char b, char c);
int main()
{
    int x = get_val();
    
    int decide = dec(x);
    return 0;
}
int get_val()
{
    int x;  printf("Enter a year:  "); scanf("%d",&x);
    return x;
}
int dec(int x)
{
    if(x%400 == 0)
      display(' ',' ',' ');
    else if(x%100 == 0) 
      display('N','O','T');
    else if(x%4 == 0)
     display(' ',' ',' ');
    else
      display('N','O','T');
      
}
void display(char a, char b, char c)
{
    printf("It is %c%c%c a leap year.\n",a,b,c);
}
