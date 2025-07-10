#include<stdio.h>
int get_item(char item[]);
int get_limit(int limit);
int main()
{
    char items[1000];
    int limit;
    int i = 0;
    do{
        items[i] = get_item(items);
        limit = get_limit(0);
        i++;
    }
    while(limit < 1);
}
int get_item(char item[])
{
    int i = 0;
    printf("A. Chicken Sandwich\tB. Mc Burger\tC. Chicken Nuggets\tD. Fries\tE. Iced Coffee\tF. Egg McMuffin\tG. Sausage Burrito");
    printf("\tH. Hot Tea\tI. Sprite\tJ. Minute Maid");
    printf("Enter the letter of your answer:  "); scanf(" %c",&item[i]);

    return item[i];

}
int get_limit(int limit)
{
    char choice;
    printf("\nDo you want to order another?\nA. Yes\tB. No\nEnter your answer:  "); scanf(" %c",&choice);

    if(choice == 'A' || choice == 'a'){
        limit+=0;
    }
    else{
        limit++;
    }

    return limit;

}