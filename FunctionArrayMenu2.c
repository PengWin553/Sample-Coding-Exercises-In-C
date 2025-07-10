#include<stdio.h>
int get_item(char item[]);
int get_quantities(int quantities[], char items[]);
int get_limit(int limit);
int main()
{
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    (U w U)   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("< << <<< <<<< << <<< <<<< << <<< <<<< << <<< <<< << <<< <<< << <  KANNO'S M A-JI-YA-BA-KO-NE RESTAURANT  > >> >>> >>> >> >>>> >>> >> >>>> >>> >> >>>> >>> >> >>>> >>> >> >");
  
    char items[1000];
    int quantities[1000];
    int limit;
    int i = 0;
    do{
        items[i] = get_item(items);
        quantities[i] = get_quantities(quantities,items);
        limit = get_limit(0);
        i++;
    }
    while(limit < 1);
    
}
int get_item(char item[])
{
    int i = 0;
    
    printf("\n\n");
    printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("   A. Chicken Sandwich [$2.50]\t   B. Burger [$3.00]\t   C. Chicken Nuggets [$2.009]\t   D. Fries [$1.90]\t   E. Iced Coffee [$1.05]\tF. Egg Muffin [$2.30]\n   G. Sausage Burrito [$1.70]");
    printf("\t   H. Hot Tea [$0.76]\t   I. Hot Chocolate [$1.05]\t   J. Coca-Cola [$0.50]\t   K. Sprite [$0.68]\t\tL. Minute Maid [$1.00]");
    printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    printf("\nEnter the letter of your choice:  "); scanf(" %c",&item[i]);

    return item[i];

}
int get_quantities(int quantities[], char items[])
{
    int i = 0;

    if(items[i] == 'A' || items[i] == 'a'){
        printf("\n\nHow many Chicken Sandwiches do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i];
    }
    if(items[i] == 'B' || items[i] == 'b'){
        printf("\n\nHow many Burgers do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i]; 
    }
    if(items[i] == 'C' || items[i] == 'c'){
        printf("\n\nHow many Chicken Nuggets packs do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i];
    }
    if(items[i] == 'D' || items[i] == 'd'){
        printf("\n\nHow many servings of Fries do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i]; 
    }
    if(items[i] == 'E' || items[i] == 'e'){
        printf("\n\nHow many cups of Iced Coffee do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i];
    }
    if(items[i] == 'F' || items[i] == 'f'){
        printf("\n\nHow many Egg Muffins do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i]; 
    }
    if(items[i] == 'G' || items[i] == 'g'){
        printf("\n\nHow many Sausage Burritos do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i];
    }
    if(items[i] == 'H' || items[i] == 'h'){
        printf("\n\nHow many cups of Hot Tea do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i]; 
    }
    if(items[i] == 'I' || items[i] == 'i'){
        printf("\n\nHow many cups of Hot Chocolate do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i];
    }
    if(items[i] == 'J' || items[i] == 'j'){
        printf("\n\nHow many glasses of Coca-Cola do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i]; 
    }
    if(items[i] == 'K' || items[i] == 'k'){
        printf("\n\nHow many glasses of Sprite do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i];
    }
    if(items[i] == 'L' || items[i] == 'l'){
        printf("\n\nHow many glasses of Minute Maid do you want to order?\nEnter quantity:  "); scanf("%d",&quantities[i]);
        return quantities[i]; 
    }
    
}
int get_limit(int limit)
{
    char choice;

    printf("\nDo you want something else?\nA. Yes\tB. No\nEnter your answer:  "); scanf(" %c",&choice);

    if(choice == 'A' || choice == 'a')
        limit+=0;
    else
        limit++;

    return limit;
}