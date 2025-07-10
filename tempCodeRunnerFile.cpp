#include<stdio.h>
#include<ctype.h>
#include<math.h>
double answer;

void PrintAnswer();
void FromSecond();
void FromMinutes();

int main()
{
    char choice;
    printf("A. Second   B. Minute   C. Hour     D. Day   E. Week    F. Month    G. Year     H. Decade   I. Century\n");
    printf("Enter unit to convert from:  ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    switch(choice){
        case 'A': FromSecond(); break;
        case 'B': FromMinutes(); break;

        default: printf("\nInvalid Input.");

    }

}

void FromSecond()
{
    double num;
    char choice;
    

    printf("B. Minute   C. Hour     D. Day   E. Week    F. Month    G. Year     H. Decade   I. Century\n");
    printf("Enter unit to convert to:  ");
    scanf(" %c",&choice);

    printf("\nEnter number to convert:  ");
    scanf("%lf",&num);

    choice = toupper(choice);

    if(choice == 'B'){
        answer = num / 60;
    }
    else if(choice == 'C'){
        answer = num/3600;
    }
    else if(choice == 'D'){
        answer = num / 86400;
    }
    else if(choice == 'E'){
        answer = num / 86400 * 7;
    }
    else if(choice == 'F'){
        answer = num / 2628288;
    }

    PrintAnswer();

}

void FromMinutes()
{
    double num;
    char choice;
    

    printf("A. Second   C. Hour     D. Day   E. Week    F. Month    G. Year     H. Decade   I. Century\n");
    printf("Enter unit to convert to:  ");
    scanf(" %c",&choice);

    printf("\nEnter number to convert:  ");
    scanf("%lf",&num);

    choice = toupper(choice);

    if(choice == 'A'){
        answer = num * 60;
    }
    // else if(choice == 'C'){
    //     answer = num/3600;
    // }
    // else if(choice == 'D'){
    //     answer = num / 86400;
    // }
    // else if(choice == 'E'){
    //     answer = num / 86400 * 7;
    // }
    // else if(choice == 'F'){
    //     answer = num / 2628288;
    // }

    PrintAnswer();
}

void PrintAnswer()
{
    round(answer);
    printf("%.4lf",answer);
}
