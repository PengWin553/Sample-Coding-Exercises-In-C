#include<stdio.h>
int main(){

    int arr[50];
    int number;

    printf("Enter range of the array: ");
    scanf("%d",&number);

    for(int i = 0; i < number; i++){
        printf("Enter value for element[%d]", i);
        scanf("%d",&arr[i]);
        if(arr[0] < arr[i]){
            arr[0] = arr[i];
        }
        else{
            arr[0] = arr[i];
        }
    }

printf("/n/n fly high no. %d",arr[0]);
    return 0;
}