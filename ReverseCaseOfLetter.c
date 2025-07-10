#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;

    printf("Enter a letter:  "); scanf("%c",&x);

    if(islower(x))
       printf("%c",toupper(x));
    else if(isupper(x))
       printf("%c",tolower(x));
    else
       printf("Invalid entry");

    return 0;
}