#include<stdio.h>
int get_val(char x, char y, char z);
int rem_quo(int a, int b, int c);
void display(int quo, int rem);

int main()
{
    int one = get_val('1','s','t');
    int two = get_val('2','n','d');
    int three = get_val('3','r','d');

    int qr = rem_quo(one,two,three);

}
int get_val(char x, char y, char z)
{
    int val;

    printf("Enter %c%c%c value:  ",x,y,z); scanf("%d",&val); return val;
}
int rem_quo(int a, int b, int c){
    int quotient = a/b/c;
    int remainder = a%b%c;

    display(quotient,remainder);

    return 0;

}
void display(int quo, int rem)
{
    printf("\nQuotient = %d\nRemainder = %d",quo,rem);
}
