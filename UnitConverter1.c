#include<stdio.h>
#include<ctype.h>
float num;

int Second(char first);
int FromKilo(char first, char second);
// int FromHecto(char first, char second);
// int FromDeca(char first, char second);
// int FromUnit(char first, char second);
// int FromCenti(char first, char second);
// int FromDeci(char first, char second);
// int FromMilli(char first, char second);

int main()
{
    // gets unit
    char first; 

    printf("Enter a number to convert:  ");
    scanf("%f",&num);

    printf("\nA. Length     B. Mass     C. Volume");
    printf("\nEnter letter of choice:  "); scanf(" %c",&first);

    first = toupper(first);

    if(first == 'A')
        Second('m');
    else if(first == 'B')
        Second('g');
    else if(first == 'C')
        Second('l');
    else
        printf("\nInvalid input. Please try again.\n\n"); 

    return 0;
}

int Second(char first)
{
    //get k or something
    char second; 

    printf("A. Kilo    B. Hecto    C. Deca    D. Meters/Grams/Liters   E. Deci    F. Centi    G. Milli");
    printf("\nEnter unit from:  ");
    scanf(" %c",&second);

    second = toupper(second);

    if(second == 'A')
        FromKilo(first,'k');
    // if(second == 'A')
    //     FromHecto(first,second);
    // if(second == 'A')
    //     FromDeca(first,second);
    // if(second == 'A')
    //     FromUnit(first,second);
    // if(second == 'A')
    //     FromCenti(first,second);
    // if(second == 'A')
    //     FromDeci(first,second);
    // if(second == 'A')
    //     FromMilli(first,second);

}

int FromKilo(char first, char second)
{
    char third;

    float answer;

    printf("\nB. Hecto    C. Deca    D. Meters/Grams/Liters   E. Deci    F. Centi    G. Milli");
    printf("\nEnter unit to:  ");
    scanf(" %c",&third);

    third = toupper(third);

    if(third == 'B'){
        answer = num * 10;
        printf("%.2f %c%c = %f %c%c",num,second,first,answer,'h',first);
    }
    else if(third == 'C'){
        answer = num * 100;
        printf("%.2f %c%c = %f %c%c%c",num,second,first,answer,'d','a',first);
    }
    else if(third == 'D'){
        answer = num * 1000;
        printf("%.2f %c%c = %f %c",num,second,first,answer,first);
    }
    else if(third == 'E'){
        answer = num * 10000;
        printf("%.2f %c%c = %f %c%c",num,second,first,answer,'d',first);
    }
    else if(third == 'F'){
        answer = num * 100000;
        printf("%.2f %c%c = %f %c%c",num,second,first,answer,'c',first);
    }
    else if(third == 'G'){
        answer = num * 1000000;
        printf("%.2f %c%c = %f %c%c",num,second,first,answer,'m',first);
    }
    else{
        printf("\nINVALID INPUT. PLEASE TRY AGAIN");
        FromKilo(first,second);
    }
}