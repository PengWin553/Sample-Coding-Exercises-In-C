#include<stdio.h>
void swap(int *A, int *B);
int main()
{
    int a, b;

    a = 2;
    b = 4;

    swap(&a,&b);

    printf("The value of a:  %u",a);
    printf("\nThe value of b:  %u",b);

    return 0;
}
void swap(int *A, int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}