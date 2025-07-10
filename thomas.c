#include<stdio.h>

int pin;
float bal, wid, depo;



void cancel()
{
    printf("\n\nTHANK YOU FOR USING THE ATM");
    printf("\nHOPE YOU COME BACK SOON!");
}
void start()
{
    int trans;
    printf("\n\n1. Balance\n2. Withdraw\n3. Deposit\n4. Cancel\n");
    printf("Enter Transaction #: ");
    scanf("%d",&trans);

    switch(trans){
    case 1:
        balance();
        break;
    case 2:
        withdraw();
        break;
        case 3:
        deposit();
        break;
        case 4:
            cancel();
    }


}


void verification()
{
    int pin1;
    int count = 0, limit = 3;

    printf("Enter PIN: ");
    scanf("%d",&pin1);

    do{
        if(count == 3){
            printf("\n\nTOO MANY ATTEMPTS");
            printf("\nPROGRAM TERMINATES");
            break;
        }
        else{
            if(pin != pin1){
                printf("\n\nPIN is incorrect");
                printf("\nTRY AGAIN\n");
                printf("Enter PIN: ");
                scanf("%d",&pin1);
                count += 1;
                continue;
            }
            else{
                printf("\nPIN ACCEPTED");
                start();
                break;
            }
        }
    }while(limit >= count);


}

void main()
{
    printf("Enter Starting Balance: P");
    scanf("%f",&bal);
    printf("Enter Account PIN: ");
    scanf("%d",&pin);

    verification();


}
int balance()
{
    int trans;
    printf("\n\nYour Current Balance is: P%.2f",bal);
    printf("\nWould you like to continue using the ATM?\n1. Yes\n2. No\n");
    scanf("%d",&trans);

    if(trans == 1){
        start();
    }
    else{
        printf("\n\nTHANK YOU FOR USING THE ATM");
    printf("\nHOPE YOU COME BACK SOON!");
    }

}

int withdraw()
{
    int trans;
    printf("\n\nYour Current Balance is: P%.2f\n",bal);
    printf("Enter Amount: ",&wid);
    scanf("%f",&wid);

    if(bal >= wid){
        printf("\n\nTRANSACTION COMPLETE!");
    printf("\nWould you like to continue using the ATM?\n1. Yes\n2. No\n");
    scanf("%d",&trans);

        if(trans == 1){
            bal = bal - wid;
            start();
        }
    }
    else{
        printf("\n\nTRANSACTION FAILED!\n");
        printf("INSUFFECIENT BALANCE!");
    }
return 0;
}

int deposit()
{
    int trans;
    printf("\n\nYour Current Balance is: P%.2f",bal);
    printf("\nEnter Amount: ");
    scanf("%f",&depo);
    bal = bal + depo;

    printf("\n\nTRANSACTION COMPLETE!");
    printf("\nWould you like to continue using the ATM?\n1. Yes\n2. No\n");
    scanf("%d",&trans);
      if(trans == 1){
            bal = bal - wid;
            start();
        }

    else{
        printf("\n\nTRANSACTION FAILED!\n");
        printf("INSUFFECIENT BALANCE!");
    }

return 0;
}