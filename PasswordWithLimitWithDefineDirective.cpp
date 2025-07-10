#include<stdio.h>
#include<string.h>
#define PASSWORD "143mae"
int main()
{
    char password[50]; int i = 0;

    printf("Enter your password:  ");
    fgets(password,50,stdin);
    password[strlen(password)-1] = '\0';

    if(strcmp(password,PASSWORD)==0)
    {
        printf("You are now logged in.\n");
    }
    else
    {
        do
        {
            printf("Password is incorrect.\nPlease Re-enter your password:  ");
            fgets(password,50,stdin);
            password[strlen(password)-1] = '\0';
            i++;

            if(strcmp(password,PASSWORD)==0)
            {
                printf("You are now logged in.\n"); break;
            }
            else if(i == 2)
            {
                printf("Forgot your password?\n"); break;
            }
        }
        while(strcmp(password,PASSWORD)!=0);
    }
}