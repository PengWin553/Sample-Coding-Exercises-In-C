#include<stdio.h>
int get_val(char a, char b, char c);
int quorem(int a, int b, int c);
void display(int a, int b);
int main()
{
    int a, b, c;

    a = get_val('1','s','t');
    b = get_val('2','n','d');
    c = get_val('3','r','d');

    quorem(a,b,c);
    
}
int get_val(char a, char b, char c)
{
    int x;

    printf("Enter %c%c%c value:  ",a,b,c); scanf("%d",&x); return x;
}
int quorem(int a, int b, int c)
{
    int quo, rem;

    quo = a/b/c;
    rem = a%b%c;

    display(quo,rem);

    return 0;
}
void display(int a, int b)
{
    printf("\nQuotient = %d",a);
    printf("\nRemainder = %d",b);
}
