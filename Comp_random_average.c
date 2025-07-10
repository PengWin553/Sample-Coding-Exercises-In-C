#include<stdio.h>
int main()
{
    int i = 1, ave, sum = 0, value, a;

    printf("Enter limit value:  "); scanf("%d",&value);

   while(i<=value)
   {
       printf("\nEnter a number:  "); scanf("%d",&a);
       sum = sum + a;
       i++;
   }

    ave = sum/value;

    printf("\nAverage:  %d",ave);

    return 0;
}