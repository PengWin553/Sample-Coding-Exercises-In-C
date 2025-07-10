#include<stdio.h>
int get_odd_even(int number, int i, int odd, int even);
void display(int odd, int even);

int main(){

    int number;
    int odd = 0, even = 0;
    printf("Enter a number: ");
    scanf("%d",&number);

    get_odd_even(number,0,odd,even);
    


    return 0;
}

int get_odd_even(int number, int i, int odd, int even){
    if(i > number){
       display(odd,even);
    }
    if(i%2 == 0){
        get_odd_even(number,i++,odd, even++);
    }
    else{
        get_odd_even(number,i++,odd++, even);
    }
}

void display(int odd, int even){
    printf("\n\nOdd : %d", odd);
    printf("\nEven : %d ",even);
}