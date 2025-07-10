#include<stdio.h>
int main()
{
    int i,j,n,b[200];

    printf("Enter decimal number:  "); scanf("%d",&n);

    i = 0;
    while(n>0)
    {
        b[i] = n%2;
        n = n/2;
        i++;
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%d ",b[j]);
    }

    return 0;
}