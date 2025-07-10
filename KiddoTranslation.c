#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int j = 0;
    char ch;

    char name[50]; printf("Enter your name:  "); fgets(name,50,stdin);
    name[strlen(name)-1] = '\0';
    printf("Hello, %s",name); printf("\n");

    int birth_year = printf("Enter your birth year:  "); scanf("%d",&birth_year);
    int Age = 2022 - birth_year;
    printf("%d\n",Age);

    float first = printf("First:  "); scanf("%f",&first);
    int second = printf("Second:  ");
    scanf("%d",&second);

    int SUM = first + second;
    char sum[100];
    sprintf(sum, "%d", SUM);
    printf("Sum:  %s\n",sum);

    char course[] = "Python for beginners\n";

    //to change the case into uppercase
    while(course[j]){
        ch = course[j];
        putchar(toupper(ch));
        j++;
    }
    printf("%s",course);
    return 0;
}