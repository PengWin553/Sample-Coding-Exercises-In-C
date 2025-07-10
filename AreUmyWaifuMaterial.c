#include<stdio.h>
#include<string.h>
int main()
{
    char x[3];
    int i = 0;

    printf("\n1. Are you a bookworm?"); 
    printf("\nEnter your answer (YES or NO):  "); scanf("%s",&x);

    if((strcmp(x,"YES")==0) || (strcmp(x,"yes")==0)){
        i++;
    }
    else if((strcmp(x,"NO")==0) || (strcmp(x,"no")==0))
    {
        i=i;
    }
    else
    {
        printf("\nInvalid Entry");
    }

    {printf("\n2. Do you like Yuri?"); 
    printf("\nEnter your answer (YES or NO):  "); scanf(" %s",&x);

    if((strcmp(x,"YES")==0) || (strcmp(x,"yes")==0)){
        i++;
    }
    else if((strcmp(x,"NO")==0) || (strcmp(x,"no")==0))
    {
        i=i;
    }
    else
    {
        printf("\nInvalid Entry");
    }}

    //Decide whether it is a hit or pass
    if(i > 1)
    {
        printf("\nYou are my waifu material.");
    }
    else
    {
        printf("\nIt was nice meeting you, but I don't think we're right for each other.");
    } 
   


    return 0;
}