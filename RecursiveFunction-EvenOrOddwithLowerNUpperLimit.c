#include<stdio.h>
void printEvenOdd(int cur, int limit);
int getLimit(char a, char b, char c, char d, char e);
void display(int lowerLimit, int upperLimit);
int main()
{
    int lowerLimit, upperLimit;
    
    lowerLimit = getLimit('l','o','w','e','r');
    upperLimit = getLimit('u','p','p','e','r');
    display(lowerLimit,upperLimit);
    printEvenOdd(lowerLimit,upperLimit);
    return 0;
}
int getLimit(char a, char b, char c, char d, char e)
{
    int value;
    printf("Enter %c%c%c%c%c limit:  ",a,b,c,d,e); scanf("%d",&value);
    return value;
}
void printEvenOdd(int cur, int limit)
{
    if(cur>limit)
      return;
    
    printf("%d\t",cur);
    
    printEvenOdd(cur+2,limit);
}
void display(int lowerLimit, int upperLimit)
{
    printf("Even/Odd Numbers from %d to %d are:  ",lowerLimit,upperLimit);
}
