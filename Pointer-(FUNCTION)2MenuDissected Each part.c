#include<stdio.h>
int fruits(int *op1);
int vegetables(int *op2);
int bought(int *op1, int *op2);
int main()
{
    int f = 0;
    int v = 3;

    f = fruits(&f);
    v = vegetables(&v);

    bought(&f,&v);

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
int vegetables(int *op2)
{
    printf("2. Pick a vegetable.\n4. Beet Root\t5. Carrot\t6. Potato\nEnter the number of your choice:  "); scanf("%d",&op2);

    int one = 1, *ONE = &one;
    int two = 2, *TWO = &two;
    int three = 3, *THREE = &three;

    if(op2 == ONE)
      op2+1;
    if(op2 == TWO)
      op2+2;
    if(op2 == THREE)
      op2+3;
}
int bought(int *op1, int *op2)
{
    int *a = op1;
    switch(*a)
    {
        case 1: printf("\nApple"); break;
        case 2: printf("\nOrange"); break;
        case 3: printf("\nWatermelon"); break;
        default: printf("\nINVALID ENTRY");
    }

     switch(*op2)
    {
        case 4: printf("\nBeet Root"); break;
        case 5: printf("\nCarot"); break;
        case 6: printf("\nPotato"); break;
        default: printf("\nINVALID ENTRY");
    }
}
