#include<stdio.h>
int main()
{
    int number;
    int even = 0;
    int odd = 0;

    printf("Enter a number:   "); scanf("%d",&number);

    for(int i = 0; i < number; i++)
    {
        if(i%2 == 0 )
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("\nEven:  %d",even);
    printf("\nOdd:  %d",odd);

    return 0;
}