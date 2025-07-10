#include<stdio.h>
int main()
{
    int rownumber, row, colnumber;

    rownumber = 1;

    printf("Enter number of rows:  "); scanf("%d",&row);

    while(rownumber<=row)
    {
        colnumber = 1;
        while(colnumber <= row)
        {
            printf("%d\t",rownumber*colnumber);
            colnumber++;
        }
        rownumber++;
        printf("\n");
    }

    return 0;
}