#include<stdio.h>
int main()
{
    int num1,num2,flag_var,i;

    printf("Enter start of range:  "); scanf("%d",&num1);
    printf("Enter end of range:  "); scanf("%d",&num2);

    if(num1>num2)
    {
        printf("\nInvalid Range");
    }
    else if(num2>num1)
    {
        for(i = num1; i<=num2; i++)
        {
            flag_var = 0;

            while(i%2 == 0)
            {
                flag_var = 1;
            }

        }
        printf("\nThe numbers are: %d",i);
    }
    return 0;
}