#include<stdio.h>
#include<string.h>
int main()
{
    char question[30];

    printf("Enter a question: ");
    fgets(question,30,stdin);

    if(strcmp(question,"Who is your daughter?")==1)
      printf("\nKanna");
    else if(strcmp(question,"Who is your wife?")==1)
      printf("\nTohru");
    else
      printf("\nInvalid question");
    
    return 0;
    
}