#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;

    printf("You are in 7th grade, it's the first day of school, what would you do?");
    printf("\nA. socialize\nB. stay quiet\nC. no");
    printf("\nEnter the letter of your answer:  "); scanf("%c",&x);

   x = toupper(x);
  

    if(x == 'A')
    {
        printf("\nYou want to say hi to other people, what way should it be?");
        printf("\nA. tell them directly\nB. let them copy your answers");
        printf("\nEnter the letter of your answer:  "); scanf(" %c",&x);
        x = toupper(x);

        if(x == 'A')
        {
            printf("\nYou find yourself in the company of your other classmates but you don't seem to fit in. You see a lonely girl at the back. What should you do?");
            printf("\nA. just ignore her\nB. go and say hi and talk to her");
            printf("\nEnter your answer:  "); scanf(" %c",&x);
            x = toupper(x);

            if(x == 'A')
            {
                printf("\n\nYour schoolyear will remain the same.");
                printf("\n\nGAME OVER");
            }
            else if(x == 'B')
            {
                printf("\n\nThis is the beginning of your fluttering feelings.");
                printf("\n\nGAME OVER");
            }
        }
        else if(x == 'B')
        {
            printf("\nThey now rely on you too much. The rest of your school year will become miserable.");
            printf("\n\nGAME OVER");
        }
        else
        {
            printf("\nInvalid Entry.");
        }
    }
    else if(x == 'B')
    {
        printf("\nThey try to socialize with you, what would you do?");
        printf("\nA. socialize with them\nB. keep them at bay");
        printf("\nEnter your answer:  "); scanf(" %c",&x);
        x = toupper(x);

        if(x == 'A')
        {
            printf("\nYou find yourself in the company of your other classmates but you don't seem to fit in. You see a lonely girl at the back. What should you do?");
            printf("\nA. just ignore her\nB. go and say hi and talk to her");
            printf("\nEnter your answer:  "); scanf(" %c",&x);
            x = toupper(x);

            if(x == 'A')
            {
                printf("\n\nYour schoolyear will remain the same.");
                printf("\n\nGAME OVER");
            }
            else if(x == 'B')
            {
                printf("\n\nThis is the beginning of your fluttering feelings.");
                printf("\n\nGAME OVER");
            }
            else
            {
                printf("\n\nInvalid Entry.");
            }
        }
        else if(x == 'B')
        {
            printf("\n\nYour entire schoolyear will be spent in books.");
            printf("\n\nGAME OVER");
        }
        else
        {
            printf("\n\nInvalid Entry.");
        }
        
    }
    else if(x == 'C')
    {
        printf("\nY O U  C R A Z Y\n\nGAME OVER");
    }
    else
    {
        printf("\nInvalid entry");
    }
     
    return 0;
}