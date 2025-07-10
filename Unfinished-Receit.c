#include<stdio.h>
//int avocado(int a, int num);
//int banana(int b, int num);
//int pineapple(int c, int num);
int main()
{
    int item[100],i,number,arr_dum,total_avo,total_ban,total_pin;
    int avo = 50;
    int ban = 60;
    int pin = 70;

    printf("1.  Avocado(50)    2. Banana(60)      3. Pineapple(70)");

    //printf("\nEnter your choices:  \n");                    // try nested for loop. use  for index in inner loop

    for(i=0;i<3;i++)
    {   printf("\nEnter your choice: \n");
        scanf("%d",&item[i]);
        printf("How many?:  ");
        scanf("%d",&number);

        if(item[i] == 1)
        {
            total_avo = avo * number;
        }
        if(item[i] == 2)
        {
            total_ban = ban * number;
        }
        if(item[i] == 3)
        {
            total_pin = pin * number;
        }
        if(item[i])

    }

    printf("\nAvocado:  %d",total_avo);
    printf("\nBanana:  %d",total_ban);
    printf("\nPineapple:  %d",total_pin);

    return 0;
}
