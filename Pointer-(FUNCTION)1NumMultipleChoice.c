#include<stdio.h>
int fruits(int *op1);
int main()
{
    int f = 0;

    f = fruits(&f);

    switch(f)
    {
        case 1: printf("\nYou chose Apple"); break;
        case 2: printf("\nYou chose Orange"); break;
        case 3: printf("\nYou chose Watermelon"); break;
        default: printf("\nINVALID ENTRY");
    }

    return 0; 
}
int fruits(int *op1)
{
    printf("1. Pick a fruit.\n1. Apple\t2. Orange\t3. Watermelon\nEnter the number of your choice:  "); scanf("%d",&op1);

    int one = 1, *ONE = &one;
    int two = 2, *TWO = &two;
    int three = 3, *THREE = &three;

    if(op1 == ONE)
      op1+1;
    if(op1 == TWO)
      op1+2;
    if(op1 == THREE)
      op1+3;
}
