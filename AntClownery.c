#include<stdio.h>
int main(void)
{
    char x;
    int i;

    printf("\n1. Who is the best girl in Bogo City Cebu?");
    printf("\nA. Jonela B. Goldfish C. Louisa "); 
    printf("\nEnter the letter of your answer:  "); scanf("%c",&x);

    switch(x)
    {
        case 'a': case 'A': i+=30; printf("\nRough, Hardcore, Spicy"); break;
        case 'b': case 'B': i+=40; printf("\nVanilla, Sweet, Cute");break;
        case 'c': case 'C': i+=20; printf("\nNaughty, Sultry, Sweet and Spicy"); break;
        default: printf("\nInvalid Entry");
        
    }

    printf("\n2. How do you rate your experience in having sex with the one you chose?");
    printf("\nA. Excellent\tB. Very Satisfactory\tC. Boring"); 
    printf("\nEnter the letter of your answer:  "); scanf(" %c",&x);

    switch(x)
    {
        case 'a': case 'A': i+=40; break;
        case 'b': case 'B': i+=30; break;
        case 'c': case 'C': i+=10; break;
        default: printf("\nInvalid Entry");
        
    }

    printf("\n\nYour taste is %d",i);

    return 0;
}