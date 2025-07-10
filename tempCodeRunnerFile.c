#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char mathematics;
    int first, second;

    printf("Choose your Operator");
    printf("a. Addition b. Subtraction c. Multiplication d. Division");
    printf("\nYour answer is: ");
    scanf("%c", &mathematics);

     printf("Enter first number: ");
     scanf("%d", &first);
     printf("Enter second number: ");
     scanf("%d", &second);


    mathematics = tolower(mathematics);

        switch(mathematics)
        {
            case 'a':
            printf("Total: %d", first + second);
            break;

            case 'b':
            printf("Total: %d", first - second);
            break;

            case 'c':
            printf("Total: %d", first * second);
            break;

             case 'd':
            printf("Total: %d", first / second);
            break;

            default:
            printf("Error input");

        }
}