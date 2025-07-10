#include<stdio.h>
int get_value();
void display(int x);
int compute(int m, int n, int o);

int main()
{
    int a,b,c,sum;
    
    a = get_value();
    b = get_value();
    c = get_value();
    
    sum = compute(a,b,c);
    display(sum);
    
    return 0;
}
int compute(int m, int n, int o)
{
    int w;
    
    w = m + n + o;
    return w;
}
int get_value()
{
    int z;
    
    printf("Enter a value:  ");
    scanf("%d",&z);
    
    return z;
}
void display(int x)
{
    printf("\nTotal value is %d",x);
}



