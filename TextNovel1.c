#include<stdio.h>
#include<string.h>
int main()
{
    char x[1];
    
    printf("**CODE TESTING FOR VN: TRIAL ONE**");
    printf("\n\nEnter the CAPITAL letter of your answer.");
    printf("\n\n\nI lie on my bed feeling a bit sad. My girlfriend just dumped me for another guy.");
    printf("\nI have her picture in my hand, a picture of her naked. What should I do about it?");
    printf("\n\nA. Cry like a baby. \nB. Jack off"); printf("\n\nEnter your answer:  "); scanf("%s",&x);
    
    if(strcmp(x,"A")==0)
    {
        printf("\n\nI punch my pillow and break my phone. Holy shit. I got madder. Tomorrow I will steal my girlfriend's new boyfriend's phone.");
        printf("\nI need to devise a plan. What should I do first?"); 
        printf("\n\nA. Break into his house and steal it   B. Ask my ex to steal it");
        printf("\n\nEnter your answer:  "); scanf("%s",&x); 
        if(strcmp(x,"A")==0)
        {
            printf("\n\nSo...I broke into his house and stole it. They caught me. I got imprisoned.");
            printf("\n\nGAME OVER");
            return 0;
        }
        else if(strcmp(x,"B")==0)
        {
            printf("\n\nI asked my ex to steal it. She kicked me in the balls. What should I do?");
            printf("\n\nA. Call the cops  B. Punch her");
            printf("\nEnter your answer:  "); scanf("%s",&x);
            
            if(strcmp(x,"A")==0)
            {
                printf("\n\nShe's now in jail.");
                printf("\nVICTORY AND THE END");
                return 0;
            }
            else if(strcmp(x,"B")==0)
            {
                printf("\n\nShe called the cops and now I got in jail.");
                printf("\n\nGAME OVER");
                return 0;
            }
        }
    }
    else if(strcmp(x,"B")==0)
    {
        printf("\n\nIt feels so good. I can't stop. AHHHH. SHEEETTTT. OHHH. AHHH. I'M GONNA FIND ANOTHER WOMAN. OHHH THIS IS THE LAST TIME.");
        printf("\nWho needs a girlfriend when I have me, myself, and I, and my hand?");
        printf("\nVICTORY IS MINE");
        return 0;
    }
    
    return 0;
}

