#include<stdio.h>
#include<ctype.h>
int main()
{
    char x; 

    printf("You are stranded in an island. What would you do?");
    printf("\nA. Deads        B. Start making shelter     C. Hunt for food");
    printf("\nEnter the letter of your choice:  "); scanf("%c",&x);

     x = toupper(x);

    if(x == 'A')
    {
        printf("\nGame over");
    }
    else if(x == 'B')
    {
        printf("\nYou walk around inside the thick canopy and found some bamboo. You decided to turn that into shelter. But you don't have a tool for cutting.");
    }
    else if(x == 'C')
    {
        printf("Decide on which food you'd like to hunt.\n");
        printf("\nA. Fish       B. Birds        C. Cocunuts");
        printf("\n\nEnter your answer:  "); scanf(" %c",&x);
         x = toupper(x);

        if(x == 'A')
        {
            printf("\nLook for a fish hook");
        }
        else if(x == 'B')
        {
            printf("\nMake a sling shot");
        }
        else if(x == 'C')
        {
            printf("\nFind some coconuts");
        }
        else
        {
            printf("\nInvalid Entry");
        }
    }
    else
    {
        printf("\nInvalid Entry");
    }

    return 0;
}