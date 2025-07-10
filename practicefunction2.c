#include<stdio.h>
#include<string.h>
int get_name();
int get_age();
void display_all(int age, char x[50]);

int main()
{

    int a;
    char b;
    a = get_age();
    b = get_name();

    display(a);
    display(b);
}

int get_name()
{
    char c[50];

    printf("Enter your name:  "); scanf("%s",&c);

    return c;
}

int get_age()
{
    int i;
    printf("Enter your age:  "); scanf("%d",i);

    return i;
}

void display_all(int age, char x[50])
{
    printf("\nName:  %s",x);
    printf("\nAge:  %d",age);
}

