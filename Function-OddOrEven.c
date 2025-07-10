#include<stdio.h>
int odd_even(int x);
int get_val();
void display(int x, char a, char b, char c, char d);

int main()
{
    int x;

    x = get_val();

    odd_even(x);

    return 0;
}

int get_val()
{
    int x;

    printf("Enter a value:  "); scanf("%d",&x);

   return x;
}

int odd_even(int x)
{

    if(x%2==0)
    {
        display(x,'E','V','E','N');
    }
    else
    {
        display(x,'O','D','D',' ');
    }

}

void display(int x, char a, char b, char c, char d)
{
    printf("\n%d = %c%c%c%c",x,a,b,c,d);
}