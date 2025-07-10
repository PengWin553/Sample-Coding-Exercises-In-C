#include<stdio.h>
#include<string.h>
int main()
{
    char x[30];

    printf("Enter your password:  "); gets(x);

    if(strcmp(x,"123bords")==0)
    {
        printf("\nYou are now logged in.");
    }
    else
    {
        do
        {
            printf("\n\nRe-enter your password:  "); gets(x);
        }
        while(strcmp(x,"123bords") != 0);

        printf("\nYou are now logged in.");

    }
    
    return 0;
}