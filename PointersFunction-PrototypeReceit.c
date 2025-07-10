#include<stdio.h> // pass address arguments to make the program work
int fruits(int *op1);
int vegetables(int *op2);
int q_fruits(int *qf);
int q_vegetables(int *qv);
int bought(int *op1, int *quan_fru, int *op2, int *quan_veg);
int main()
{
    int f = 0;
    int v = 3;

    int quan_f = 0;
    int quan_v = 0;

    f = fruits(&f);
    quan_f = q_fruits(&quan_f);
    v = vegetables(&v);
    quan_v = q_vegetables(&quan_v);

    bought(&f, &quan_f, &v, &quan_v);

    return 0; 
}
int fruits(int *op1)
{
    printf("1. Pick a fruit.\n1. Apple [P10.00]\t2. Orange [P15.00]\t3. Watermelon [P100.00]\nEnter the number of your choice:  "); scanf("%d",&op1);

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
int q_fruits(int *qf)
{
    printf("\nQuantity of what you chose:  "); scanf("%d",&qf);

    qf+=0;
}
int vegetables(int *op2)
{
    printf("\n2. Pick a vegetable.\n4. Beet Root [P50]\t5. Carrot [30]\t6. Potato [40]\nEnter the number of your choice:  "); scanf("%d",&op2);

    int four = 1, *FOUR = &four;
    int five = 2, *FIVE = &five;
    int six = 3, *SIX = &six;


    if(op2 == FOUR)
      op2+1;
    if(op2 == FIVE)
      op2+2;
    if(op2 == SIX){
      op2+3;
    }
}
int q_vegetables(int *qv)
{
    printf("\nQuantity of what you chose:  "); scanf("%d",&qv);

    qv+=0;
}
int bought(int *op1, int *quan_fru, int *op2, int *quan_veg)
{
    int *a = op1;
    int *b = op2;

    int *x = quan_fru;
    int *y = quan_veg;

    // printf("%d  %d",*a, *b);
    // printf("\n%d  %d",*x, *y);

    int total_f, total_v, total;

    printf("\n\n\n*****************PROTOTYPE RECEIT*****************");

   switch(*a) // this switch statement checks for fruits
    {
        case 1: total_f = 10*(*x); printf("\n\nApple....................................PHP%d.00",total_f);  break;
        case 2: total_f = 15*(*x); printf("\n\nOrange...................................PHP%d.00",total_f);  break;
        case 3: total_f = 100*(*x); printf("\n\nWatermelon...............................PHP%d.00",total_f);  break;
        default: printf("\n\nINVALID ENTRY");
    }

     switch(*b) // this swtich statement checks for vegetables
    {
        case 4: total_v = 50*(*y);printf("\nBeet Root................................PHP%d.00",total_v);  break;
        case 5: total_v = 30*(*y);printf("\nCarrot...................................PHP%d.00",total_v);  break;
        case 6: total_v = 40*(*y); printf("\nPotato...................................PHP%d.00",total_v);  break;
        default: printf("\nINVALID ENTRY");
    }
    
    total = total_f + total_v;

    printf("\n\nTOTAL PAYMENT:...........................PHP%d.00",total);
}
