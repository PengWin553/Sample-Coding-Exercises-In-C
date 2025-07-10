#include<stdio.h>
void display(int x);
int get_value();


int main()
{
    int a,b, sum;
    a = get_value();
    b = get_value();

    sum = a + b;
    display(sum);

    return 0;
}

int get_value()
{
    int z;

    printf("Enter a value:  "); scanf("%d",&z);

    return z;
}

void display(int x)
{
    printf("\nTotal is %d", x);
}