#include<stdio.h>
int get_value();
void display(int sum);

int main()
{
    int a,b,sum;

    a = get_value();
    b = get_value();
    sum = a + b;
    display(sum);

    return 0;
}

int get_value()
{
    int x;

    printf("Enter a value:  "); scanf("%d",&x);

    return x;
}

void display(int sum)
{
    printf("\nTotal:  %d",sum);
}