#include<stdio.h>
#include<ctype.h>
char get_char();
char up_lo(char character);
void display(char character, char reverse);

int main()
{
    char x = get_char();
    char decide = up_lo(x);

    display(x, decide);

    return 0;
}
char up_lo(char character)
{
    if(islower(character))
      return("%c",toupper(character));
    else
      return("%c",tolower(character));
    
}

char get_char()
{
    char x;

    printf("Enter a letter to reverse:  "); scanf("%c",&x); return x;
}

void display(char character, char reverse)
{
    printf("%c = %c",character, reverse);
}