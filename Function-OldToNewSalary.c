#include<stdio.h>
#define retroactive_months 7.00
float old_salary();
float new_salary(float old_sal);
float amount_collectible(float new_sal);
void display(float a, float b, float c);

void main()
{
    float old_sal = old_salary();
    float new_sal = new_salary(old_sal);
    float amount_col = amount_collectible(new_sal);

    display(old_sal,new_sal,amount_col);
}
float old_salary()
{
    float x;
    printf("Enter old salary:  "); scanf("%f",&x); return x;
}
float new_salary(float old_sal)
{
    float new_sal = (old_sal * 0.08) + old_sal;
    return new_sal;
}
float amount_collectible(float new_sal)
{
    float amount = new_sal * 7; return amount;
}
void display(float a, float b, float c)
{
    printf("\nOld salary = P%.2f\nNew salary = P%.2f\nAmount collectible in the last six months = P%.2lf",a,b,c);
}