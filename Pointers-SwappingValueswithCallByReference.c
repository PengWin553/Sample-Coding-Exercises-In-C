#include<stdio.h> // call by reference
void swap(int *A, int *B);
int main()
{
    int a, b;

    a = 2;
    b = 4;

    printf("The values of a and b in the main function:  a = %d   b = %d",a,b);

    swap(&a,&b);

    printf("\nThe values of a and b in the main function after the swap function:  a = %d   b = %d",a,b);

    return 0;
}
void swap(int *A, int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;

    printf("\nThe values of a and b in the swap function:  a = %d   b = %d",*A,*B);
}