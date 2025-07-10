#include<stdio.h>
int get_val();
int compute(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
void display(int sum);
int main()
{
    int one = get_val();
    int two = get_val();
    int three = get_val();
    int four = get_val();
    int five = get_val();
    int six = get_val();
    int seven = get_val();
    int eight = get_val();
    int nine = get_val();
    int ten = get_val();

    int sum = compute(one,two,three,four,five,six,seven,eight,nine,ten);
    display(sum);
    return 0;

}
int get_val()
{
    int val; printf("Enter a value:  "); scanf("%d",&val); return val;
}
int compute(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)
{
    int sum = a+b+c+d+e+f+g+h+i+j; return sum;
}
void display(int sum)
{
    printf("\nSum = %d",sum);
}