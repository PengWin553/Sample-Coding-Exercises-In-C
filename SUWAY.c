#include<stdio.h>
#include<string.h>
int main()
{
    int x, y=0,rem,quo;
    char z;
    printf("DECIMAL TO BINARY OR OCTAL CONVERTER");
    printf("\nA. Binary B. Octal"); printf("\nEnter the letter of your choice:  "); scanf("%c",&z);
    printf("\nEnter a number:  "); scanf("%d",&x);


    if(strcmp(x,"A")==0)
    {
        while(quo > 0){
        y = 2;
        quo = x/y; rem = x%y;
        printf("%d",rem);
        x = quo;    }
    }
    else if(strcmp(x,"B")==0)    
    {
        while(quo > 0){
        y = 8;
        quo = x/y; rem = x%y;
        printf("%d",rem);
        x = quo;    }
    }   
    
    return 0;
}