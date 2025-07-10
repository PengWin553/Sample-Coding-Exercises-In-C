#include<stdio.h>
int get_val();
int alleven(int x);
void display(int i);

int main()
{
    int n = get_val();
    alleven(n);

}
int get_val()
{
    int num; printf("Enter a number:  "); scanf("%d",&num); return num;
}
int alleven(int x)
{
    for(int i=1;i<=x;i++)
    {
        if(i%2==0)
          display(i);
        else
          continue;

    }
}
void display(int i)
{
    printf("%d\n",i);
}
