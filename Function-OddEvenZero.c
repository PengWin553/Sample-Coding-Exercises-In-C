#include<stdio.h>
int get_val();
int oddeven(int val);
void display(int oez, char a, char b, char c, char d);

int main()
{
    int x = get_val();
    int oez = oddeven(x);
}
int get_val()
{
    int num; printf("Enter a number:  "); scanf("%d",&num); return num;
}
int oddeven(int val)
{
    if(val <= 0)
    {
        display(val,'Z','E','R','O');
    }
    else
    {
        if(val%2 == 0)
        {
            display(val,'E','V','E','N');
        }
        else
        {
            display(val,'O','D','D',' ');
        }
    }
   

    return 0;
}
void display(int oez, char a, char b, char c, char d)
{
    printf("\n%d = %c%c%c%c",oez,a,b,c,d);
}
