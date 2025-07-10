#include<stdio.h>
int main()
{
    char x;
    int i=0;

    printf("1. Who is the best girl?");
    printf("\nA. Kanna   B. Saikawa   C. Shouta");
    printf("\nEnter your answer:  "); scanf(" %c",&x);

    switch(x)
    {
        case 'a': case 'A': i++; break;
        case 'b': case 'B': case 'c': case 'C': i = i; break;
        default: printf("\nInvalid answer"); return 0;
    }

    printf("2. Who is the best girl?");
    printf("\nA. Goldfish   B. Onee-san   C. Creepy Onee-san");
    printf("\nEnter your answer:  "); scanf(" %c",&x);

    switch(x)
    {
        case 'a': case 'A': case 'b': case 'B': i = i; break;
        case 'c': case 'C': i++; break;
        default: printf("\nInvalid answer"); return 0;
    }

    printf("\nScore: %d",i);

    return 0;
}