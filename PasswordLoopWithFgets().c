#include<stdio.h>
#include<string.h>
int main()
{
    char x[30];

    printf("Enter your password:  "); 
    fgets(x,30,stdin);
    x[strlen(x)-1] = '\0';

    if(strcmp(x,"123abc")==0)
    {
        printf("\nYou are now logged in.");
    }
    else
    {
        do
        {
            printf("\n\nRe-enter your password:  "); 
            fgets(x,30,stdin);
            x[strlen(x)-1] = '\0';
        }
        while(strcmp(x,"123abc") != 0);

        printf("\nYou are now logged in.");

    }
    
    return 0;
}
