#include<string.h>
#include<stdio.h>
int main()
{
    char x[20];

    printf("\nEnter your password:  "); scanf("%s",&x);

    if(strcmp(x,"Password101")==0){
        printf("\nPassword is correct");
    }
    else{
        printf("\nPassword is incorrect");
    }
    return 0;
}