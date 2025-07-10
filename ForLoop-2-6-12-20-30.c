#include<stdio.h> // 2  6   12  20  30
int main(void)
{    
    int j = 4;
    for(int i = 2; i<=30; i+=0)
    {
        printf("%d\t",i);
        i = i+j;
        j+=2;
    }

    return 0;
}