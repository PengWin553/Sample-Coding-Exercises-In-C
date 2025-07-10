//good day, sir. I will be discussing the program that I made named "prototype receipt". This is the beta version of the code I am trying to
//achieve. I have less than a year of programming experiece, and this is the first time I made my own program that used
// pointers. I say my thanks to you for explaining it well that I am able to design this code.

//This is my output for your Finals #3, in which we are tasked to make a program that uses pointers.
/* This code that I will be discussing runs like this:  (run the program and test it two times)*/

//so...HOW DOES IT WORK? 

#include<stdio.h> // in this row, we are declaring the appropriate header file since we will be utilizing printf() and scanf() functions
int fruits(int *op1); // As you can see, the following function prototypes here have pointer parameters
int vegetables(int *op2);
int q_fruits(int *qf);
int q_vegetables(int *qv);
int bought(int *op1, int *quan_fru, int *op2, int *quan_veg); //how each function behaves will be discussed later in the program

//For the meantime, let's go to the main() function
int main()
{
    int f = 0; // f serves as a variable that deals with what fruit was chosen     [ remember: 1.)  Apple  2.) Orange   3.) Watermelon ]
    int v = 3; // v also serves as a variable that deals with what vegetable was chosen    [ remember: 4.)  Beet Root  5.) Carrot   6.) Potato ]

    int quan_f = 0; // quan_f serves as a variable that deals with the quantity of what type of fruit was chosen
    int quan_v = 0; // quan_v serves as a variable that deals with the quantity of what type of vegetable was chosen

    f = fruits(&f); // the f variable calls for the function fruits(). As it calls, it also sends the (&f) argument, which is the address of the
                    //f variable itself. Its purpose is to ask for the fruits() function what type of fruit was chosen by the user.

    quan_f = q_fruits(&quan_f);  //the quan_f variable calls for the function q_fruits(). As it calls, it also sends the (&quan_f) argument, 
                  // which is the address of the quan_f variable itself. It asks the q_fruits() function for the quantity of what type of
                  // fruit was chosen by the user
    
    v = vegetables(&v);  //the v variable calls for the function vegetables(). As it calls, it also sends the (&v) argument, which is the
                  //address of v variable itself. Its purpose is to ask for the vegetables() function what type of fruit was chosen by the user

    quan_v = q_vegetables(&quan_v); //the quan_v variable calls for the function q_vegetables(). As it calls, it also sends the (&quan_v) 
                  //argument which is the address of the quan_v variable itself. It asks the q_vegetables() function for the quantity of
                  // what type of vegetable was chosen by the user

    bought(&f, &quan_f, &v, &quan_v); //after the four declared variables had finished asking for values from the functions they asked respec-
                //tively, our main program then calls the bought() function. As it calls, it also sends the (&f, &quan_f, &v, &quan_v)
                //argument, containing each of the variables' address.

    return 0; 
}
int fruits(int *op1) // This was called by f variable of main() function. It's tasked to get the type of fruit what the user chooses
                     //no need for the return statement since we're dealing with pointers. Any change here causes the same change in the main()
                     //function that called it
{
    //The program then prompts the user to pick a fruit, and for them to enter the number of their choice [1,2,3 instead of A,B,C]
    printf("1. Pick a fruit.\n1. Apple [P10.00]\t2. Orange [P15.00]\t3. Watermelon [P100.00]\nEnter the number of your choice:  ");

    scanf("%d",&op1); //the pointer variable op1 now has 1 or 2 or 3 value, depending on what he/she chose

    int one = 1, *ONE = &one; // We are trying to make variable ONE a pointer variable here that has the value of 1 ---> Because we can't do
                              //  operators between pointer and basic integer
    int two = 2, *TWO = &two; // It's the same as above, we are trying to make variable TWO a pointer variable that has the value of 2
    int three = 3, *THREE = &three; // THREE is a pointer variable that has the value of 3.

    //Now, we can perform operators between these pointer variables

    if(op1 == ONE)  //if the user chose 1, which contains Apple:
      op1+1;           //
    if(op1 == TWO)
      op1+2;
    if(op1 == THREE){
      op1+3;
    }
}
int q_fruits(int *qf)
{
    printf("\nQuantity of what you chose:  "); scanf("%d",&qf);

    qf+=0;
}
int vegetables(int *op2)
{
    printf("\n2. Pick a vegetable.\n4. Beet Root [P50]\t5. Carrot [30]\t6. Potato [40]\nEnter the number of your choice:  "); scanf("%d",&op2);

    int one = 1, *ONE = &one;
    int two = 2, *TWO = &two;
    int three = 3, *THREE = &three;


    if(op2 == ONE)
      op2+1;
    if(op2 == TWO)
      op2+2;
    if(op2 == THREE){
      op2+3;
    }
}
int q_vegetables(int *qv)
{
    printf("\nQuantity of what you chose:  "); scanf("%d",&qv);

    qv+=0;
}
int bought(int *op1, int *quan_fru, int *op2, int *quan_veg)
{
    int *a = op1;
    int *b = op2;

    int *x = quan_fru;
    int *y = quan_veg;

    // printf("%d  %d",*a, *b);
    // printf("\n%d  %d",*x, *y);

    int total_f, total_v, total;

    printf("\n\n\n*****************PROTOTYPE RECEIT*****************");

    switch(*a)
    {
        case 1: printf("\n\nApple....................................PHP%d.00",10*(*x)); total_f = 10*(*x); break;
        case 2: printf("\n\nOrange...................................PHP%d.00",15*(*x)); total_f = 15*(*x); break;
        case 3: printf("\n\nWatermelon...............................PHP%d.00",100*(*x)); total_f = 100*(*x); break;
        default: printf("\n\nINVALID ENTRY");
    }

     switch(*b)
    {
        case 4: printf("\nBeet Root................................PHP%d.00",50*(*y)); total_v = 50*(*y); break;
        case 5: printf("\nCarrot...................................PHP%d.00",30*(*y)); total_v = 30*(*y); break;
        case 6: printf("\nPotato...................................PHP%d.00",40*(*y)); total_v = 40*(*y); break;
        default: printf("\nINVALID ENTRY");
    }
    
    total = total_f + total_v;

    printf("\n\nTOTAL PAYMENT:...........................PHP%d.00",total);
}
