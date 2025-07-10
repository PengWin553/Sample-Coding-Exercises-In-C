#include<stdio.h>
#include<string.h>
#define EMAIL "hooligan@gmail.com"
#define PASSWORD "brunosmar"

int main()
{
    char email[20], password[20];
    int i = 0, j = 0;

    printf("Enter your email:  ");
    fgets(email,20,stdin);
    email[strlen(email)-1] = '\0';

    if(strcmp(email,EMAIL) == 0)
    {
        printf("\n\nEnter your password:  ");
        fgets(password,20,stdin); password[strlen(password)-1] = '\0';

        if(strcmp(password,PASSWORD)==0)
        {
            printf("\n\nYou are now logged in.");
        }
        else
        {
            do
            {
                printf("\n\nPassword incorrect.\nPlease enter your password again:   ");
                fgets(password,20,stdin); password[strlen(password)-1] = '\0';
                j++;

                if(strcmp(password,PASSWORD)==0)
                {
                    printf("\nYou are now logged in."); break;
                }
                else if(j == 2)
                {
                    printf("\nForgot your password?"); break;
                }
            }
            while(strcmp(password,PASSWORD)!=0);
        }
    }
    else
    {
        do
        {
            printf("\n\nEmail incorrect.\nPlease enter your email again:  ");
            fgets(email,20,stdin);
            email[strlen(email)-1] = '\0';
            i++;

            if(strcmp(email,EMAIL)==0)
            {
                printf("\n\nEnter your password:  "); 
                fgets(password,20,stdin);
                password[strlen(password)-1] = '\0';

                if(strcmp(password,PASSWORD) == 0)
                {
                    printf("\n\nYou are now logged in.");
                }
                else
                {
                    do
                    {
                        printf("\n\nPasssword incorrect. Please enter your password again:  ");
                        fgets(password,20,stdin);
                        password[strlen(password)-1] = '\0';
                        j++;

                        if(strcmp(password,PASSWORD)==0)
                        {
                            printf("\n\nYou are now logged in.");
                        }
                        else if(j == 2)
                        {
                            printf("\n\nForgot your password?");
                        }
                    }
                    while(strcmp(password,PASSWORD)!=0);
                }
            
                break;
            }
            else if(i == 2)
            {
                printf("\n\nForgot your email?"); break;
            }
        }
        while(strcmp(email,EMAIL)!=0);
    }

    return 0;
}