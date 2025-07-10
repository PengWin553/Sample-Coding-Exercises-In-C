/* kilograms to tons; kilograms to ounces */
#include<stdio.h>
#define kilogram_to_ton 0.001
#define kilogram_to_ounce 35.274
int get_kilo();
int to_ton(double x);
int to_ounce(double x);
void display(double a, double b, double c);
int main()
{
    double kilo, ounce, ton;

    kilo = get_kilo();
    ton = to_ton(kilo);
    ounce = to_ounce(kilo);
    display(kilo,ton,ounce);
    return 0; 
}
int get_kilo()
{
    double x; printf("Enter value in kilograms:  "); scanf("%lf",&x); return x;
}
int to_ton(double x)
{
    double ton = x * kilogram_to_ton; return ton;
}
int to_ounce(double x)
{
    double ounce = x * kilogram_to_ounce; return ounce;
}
void display(double a, double b, double c)
{
    printf("\n\n%.2lf kilograms = %.2lf metric tons",a,b);
    printf("\n%.2lf kilograms = %.2lf ounces",a,c);
}
