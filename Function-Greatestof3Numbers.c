#include<stdio.h>
int get_val(char x, char y, char z);
int greatest(int a, int b, int c);
void display(char x, char y, char z);

int main()
{
    int num1 = get_val('1','s','t');
    int num2 = get_val('2','n','d');
    int num3 = get_val('3','r','d');

    greatest(num1,num2,num3);

}
int get_val(char x, char y, char z)
{
    int val; printf("Enter %c%c%c value:  ",x,y,z); scanf("%d",&val); return val;
}
int greatest(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
          display('1','s','t');
        else
          display('3','r','d');
    }
    else if(b>a)
    {
        if(b>c)
          display('2','n','d');
        else
          display('3','r','d');
    }
    else if(c>a)
    {
        if(c>b)
          display('3','r','d');
        else
          display('2','n','d');
    }
}
void display(char x, char y, char z)
{
    printf("\nThe %c%c%c number is the greatest.",x,y,z);
}