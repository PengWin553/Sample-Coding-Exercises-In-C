#include<stdio.h>
int main()
{
    int numbers[3][5];
    int i,j;

    //int rows = sizeof(numbers)/sizeof(numbers[0]);
    //int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

        for(i=0;i<3;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("\nEnter values for multiarray [%d][%d]:  ",i,j); scanf("%d",&numbers[i][j]);
            }
        }
    

    printf("\nThe two dimensional array elements are:  \n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("%d\t",numbers[i][j]);
                if(j == 4){
                    printf("\n");
                }
            }
        }

    return 0;
}