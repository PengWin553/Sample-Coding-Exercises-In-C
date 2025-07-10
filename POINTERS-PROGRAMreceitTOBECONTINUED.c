#include<stdio.h> // pass address arguments to make the program work
int fruits(int *op1, int *quan_fru);
int vegetables(int *op2, int *quan_veg);
int bought(int *op1, int *quan_fru, int *op2, int *quan_veg);
int main()
{
    int f = 0;
    int v = 3;

    int quan_f = 0;
    int quan_v = 0;

    f = fruits(&f, &quan_f);
    v = vegetables(&v, &quan_v);

    bought(&f, &quan_f, &v, &quan_v);

    return 0; 
}
int fruits(int *op1, int *quan_fru)
{
    printf("1. Pick a fruit.\n1. Apple\t2. Orange\t3. Watermelon\nEnter the number of your choice:  "); scanf("%d",&op1);
    printf("\nQuantity of what you chose:  "); scanf("%d",&quan_fru);

    int one = 1, *ONE = &one;
    int two = 2, *TWO = &two;
    int three = 3, *THREE = &three;

    if(op1 == ONE)
      op1+1;
    if(op1 == TWO)
      op1+2;
    if(op1 == THREE){
      op1+3;
    }

    
    
}
int vegetables(int *op2, int *quan_veg)
{
    printf("\n2. Pick a vegetable.\n4. Beet Root\t5. Carrot\t6. Potato\nEnter the number of your choice:  "); scanf("%d",&op2);
    printf("\nQuantity of what you chose:  "); scanf("%d",&quan_veg);


    int one = 1, *ONE = &one;
    int two = 2, *TWO = &two;
    int three = 3, *THREE = &three;


    if(op2 == ONE)
      op2+1;
    if(op2 == TWO)
      op2+2;
    if(op2 == THREE){
      op2+3;
    }

    

}
int bought(int *op1, int *quan_fru, int *op2, int *quan_veg)
{
    int *a = op1;
    int *b = op2;

    int *x = quan_fru;
    int *y = quan_veg;

    printf("%d  %d",*a, *b);
    printf("\n%d  %d",*x, *y); // solve this problem first

    switch(*a)
    {
        case 1: printf("\nApple price:  10..........PHP%d"); break;
        case 2: printf("\nOrange price:  15..........PHP%d"); break;
        case 3: printf("\nWatermelon price:  100..........PHP%d"); break;
        default: printf("\nINVALID ENTRY");
    }

     switch(*b)
    {
        case 4: printf("\nBeet Root price:  50..........PHP%d"); break;
        case 5: printf("\nCarrot price:  30..........PHP%d"); break;
        case 6: printf("\nPotato price:  40..........PHP%d"); break;
        default: printf("\nINVALID ENTRY");
    }
}
