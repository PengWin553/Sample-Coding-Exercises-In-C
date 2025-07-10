#include<stdio.h> // 1       1       3       4       6       9       10      16      15      25
int main()
{
    int i = 1;
    int j = 1;
    int x = 1;

    while(i<=15 && j<=5)
    {
        x++;
        printf("%d\t",i);
        printf("%d\t",j*j);
        j++;
        i = x+i;
    }

    return 0;
}