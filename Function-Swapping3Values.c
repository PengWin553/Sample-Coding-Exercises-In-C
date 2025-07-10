#include<stdio.h>
int get_val(char a, char b, char c);
int swapping(int a, int b, int c);
void display();
int main()
{
    int a, b, c;
    int swap, display;

    a = get_val('1','s','t');
    b = get_val('2','n','d');
    c = get_val('3','r','d');

    swap = swapping(a,b,c);

    return 0;
}
int get_val(char a, char b, char c)
{
    int x;

    printf("Enter %c%c%c value:  ",a,b,c);
    scanf("%d",&x);

    return x;
}
int swapping(int a, int b, int c)
{
    int dummy = a;
    a = b;
    b = c;
    c = dummy;

    display(a,b,c);
}
void display(int a, int b, int c)
{
    printf("\nThe 1st value now = %d",a);
    printf("\nThe 2nd value now = %d",b);
    printf("\nThe 3rd value now = %d",c);
}