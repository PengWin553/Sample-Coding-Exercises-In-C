#include <stdio.h>
int main()
{
    int myNumbers[]={20,50,70,90,200};
    int i;
    
    for(i=0; i<5; i= i + 1 ){
        printf("%d\n",myNumbers[i]);
    }
    return 0;
}