#include<stdio.h>
int main()
{
    float budget;
    float budget_min;
    float payment = 0;
    char appe,main,dessert;

    printf("Enter your budget:  "); scanf("%f",&budget);
    budget_min = budget;

    printf("\n1. APPETIZER");
    printf("\nA. Bread [50]\tB. Biscuits [30]\tC. Milk Tea [60]");
    printf("\nEnter the letter of your choice:  "); scanf(" %c",&appe);

    switch(appe)
    {
        case 'a': case 'A': budget-=50; break;
        case 'b': case 'B': budget-=30; break;
        case 'c': case 'C': budget-=60; break;
        default: printf("\nINVALID ENTRY");
    }

    printf("\n2. MAIN COURSE");
    printf("\nA. Chicken Adobo [100]\tB. Pork Adobo [120]\tC. Lumpia Shanghai [70]");
    printf("\nEnter the letter of your choice:  "); scanf(" %c",&main);

    switch(main)
    {
        case 'a': case 'A': budget-=100; break;
        case 'b': case 'B': budget-=120; break;
        case 'c': case 'C': budget-=70; break;
        default: printf("INVALID ENTRY");
    }

    printf("\n3. Dessert");
    printf("\nA. ICE TEA [50]\tB. COCONUT SMOOTHIE [60]\tC. HALO-HALO [70]");
    printf("\nEnter the letter of your choice:  "); scanf(" %c",&dessert);

    switch(dessert)
    {
        case 'a': case 'A': budget-=50; break;
        case 'b': case 'B': budget-=60; break;
        case 'c': case 'C': budget-=70; break;
        default: printf("INVALID ENTRY");
    }

    payment = budget_min - budget;
    
    if(budget_min < payment)
    {
        printf("\nYour budget is insufficient.");
          printf("\nYour money left is now:  $%20.2f",budget);
    }
    else
    {
        printf("\nYour orders are now being processed.\nYour total payment is:  $%21.2f",payment);
        printf("\nYour money left is now:  $%20.2f",budget);
    }

    return 0;
}