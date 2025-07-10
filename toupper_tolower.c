#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("Enter an alphabet:  ");
    putchar('\n');
    x = getchar();

    printf("\n\nReverse case of %c is: ",x);
    if(islower(x))
    {
        putchar(toupper(x));
    }
    else
    {
        printf("%c",tolower(x));
    }

    return 0;
}