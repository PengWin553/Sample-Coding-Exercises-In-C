#include<stdio.h> // 1       1       3       4       6       9       10      16      15      25
int main()
{
    int P = 1;
    int adder = 0;
    int adderA = 1;
    int adderAA = 1;
    int adder2 = 2;
    int adderB = 0;
    int adderBB = -1;
    
    for(int i=0;i<=9;i++)
    {
        if (i%2==0)
        {
            printf("%d\t",P); 
            P+= adder; 
            adder += adderA;   
            adderA += adderAA;
        }
        else
        {   
            printf("%d\t",P);                                               
            P += adder2; 
            adder2 += adderB; 
            adderB += adderBB;
        } 
    }
    
    return 0;
}
