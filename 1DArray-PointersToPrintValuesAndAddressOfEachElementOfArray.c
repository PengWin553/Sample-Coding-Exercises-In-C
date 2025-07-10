#include <stdio.h>

int main () {

   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
   int i;

   p = balance;
 
   printf( "Array address values using pointer\n");
	
   for ( i = 0; i < 5; i++ ) {
      printf("*(p + %d) : %u\n",  i, (p + i) );
   }

   printf( "\nArray address values using balance as address\n");
	
   for ( i = 0; i < 5; i++ ) {
      printf("*(balance + %d) : %u\n",  i, (balance + i) );
   }

   printf( "\nArray values using pointer\n");
	
   for ( i = 0; i < 5; i++ ) {
      printf("*(p + %d) : %.2lf\n",  i, *(p + i) );
   }

   printf( "\nArray values using balance as address\n");
	
   for ( i = 0; i < 5; i++ ) {
      printf("*(balance + %d) : %.2lf\n",  i, *(balance + i) );
   }
 
   return 0;
}