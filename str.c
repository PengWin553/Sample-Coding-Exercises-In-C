#include<stdio.h>
#include<string.h>
int main()
{
    char string1[] = "Bro";
    char string2[] = "Code";

    int result1 = strlen(string1);
    int result2 = strcmp(string1,string2);
    int result3 = strncmp(string1,string2,1);
    int result4 = strcmpi(string1,string2);
    int result5 = strnicmp(string1,string2,1);

    printf("%d",result1);

    if(result2 == 0){
        printf("\nThese strings are the same");
    }
    else{
        printf("\nThese strings are not the same");
    }

    if(result3 == 0){
        printf("\nThese strings are the same");
    }
    else{
        printf("\nThese strings are not the same");
    }

    if(result4 == 0){
        printf("\nThese strings are the same");
    }
    else{
        printf("\nThese strings are not the same");
    }

    if(result5 == 0){
        printf("\nThese strings are the same");
    }
    else{
        printf("\nThese strings are not the same");
    }

   




    return 0;
}