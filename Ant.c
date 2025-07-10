#include<stdio.h>
int main()
{
    char choice;

    printf("Capitalize your letters");
    printf("\n1. Should we violate Goldfish?");
    printf("\nA. YES  B. NO");
    printf("\nYour answer:  "); scanf("%c",&choice);

    switch(choice)
    {
        case 'A': printf("\nHorny no Horny"); break;
        case 'B': printf("\nSana ol but-an"); break;
        default: printf("\nHave a nice day"); 
    }
    
    printf("\n2. Who is your favorite character?");
    printf("\nA. Jesus  B. Satas  C. Goldfish");
    printf("\nYour answer:  "); scanf(" %c",&choice);

    switch(choice)
    {
        case 'A': printf("\nBut-an"); 
        break;
        case 'B': printf("\nAnake demonyo"); 
        break;
        case 'C': printf("\nSimp"); 
        break;
        default: printf("\nHave a nice day");
    }

    printf("\n3. Kinsay laing pitlokon?");
    printf("\nA. Goldfish  B. Bird Shit  C. Inatay Piste");
    printf("\nYour answer:  "); scanf(" %c",&choice);

    switch(choice)
    {
        case 'A': printf("\nDelicious"); 
        break;
        case 'B': printf("\nMaytag maligsan"); 
        break;
        case 'C': printf("\nMaytag mahog sa seremse"); 
        break;
        default: printf("\nHave a nice day");
    }
    return 0;
}