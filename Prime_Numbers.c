#include<stdio.h>
int main()
{
    int num1, num2, flag_var, i, j;

    printf("Enter start of range:  "); scanf("%d",&num1);
    printf("Enter end of range:  "); scanf("%d",&num2);

    if(num1>num2)
    {
        printf("\nInvalid Range");
    }
    else if (num1<num2)
    {
       for(i=num1; i<num2; i++)
    {
        flag_var = 0;
        
        for(j=2; j<=i/2; ++j)
        {
            if(i%j==0)
            {
                flag_var = 1;
                break;
            }
        }
        if(flag_var == 0)
           printf("%d\n",i);
    }
    }
    

    return 0;

}