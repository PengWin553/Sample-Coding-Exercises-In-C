#include<stdio.h>
#define price 12.12
#define budget 50000.00
int main(){
    
    double a = price * 150 ;  //price per month after the overhaul
    double b = budget/a;  // number of months it will take to consume 50K budget after the overhaul

    double c = price * 200 ;  //price per month before the overhaul
    double d = budget/c;  // number of months it will take to consume 50K budget before the overhaul

    double savings_pmonth = c - a;
    double savings_months = (b * c) - budget;

    printf("**ANSWER**");

    printf("\n\nThe number of months it will take dad to consume P%.2lf budget after the overhaul is %.1lf months.",budget,b);
    printf("\nThe savings that he realized was P%.2lf per month after the overhaul.\nHe could have spent P%.2lf more in %.1lf months if he didn't get the overhaul.",savings_pmonth, savings_months,b);
    printf("\nHe could've only spent P%.2lf in %.1lf smonths he'd spent P%.2lf before the overhaul.",a*d,d,budget);

    printf("\n\nSOLUTION:");
    printf("\n\n1.) P%.2lf per liter x 150 liters per month = P%.2lf price per month after the overhaul",price, a);
    printf("\n2.) P%.2lf budget / P%.2lf = %.1lf number of months it will take to consume P%.2lf budget after the overhaul",budget,a,b,budget);
    printf("\n3.) P%.2lf per liter x 200 liters per month = P%.2lf price per month before the overhaul",price, c);
    printf("\n4.) P%.2lf budget / P%.2lf = %.1lf number of months it will take to consume P%.2lf budget before the overhaul",budget,c,d,budget);
    printf("\n5.) P%.2lf before the overhaul - P%.2lf after the overhaul = P%.2lf savings per month",a,c,savings_pmonth);
    printf("\n6.) %.1lf months after the overhaul x P%.2lf price per month before the overhaul - %.2lf budget = P%.2lf spent in %.1lf months",b,c,budget,savings_months,b);

    return 0;
}