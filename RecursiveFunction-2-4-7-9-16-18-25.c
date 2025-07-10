#include<stdio.h>  //2   4   7   9  12  16  18  25
void display1(int x, int y);
void display2(int x, int y);
int main()
{
  int x = 2;
  int y = 2;

  display1(x,y);
  return 0;
}
void display1(int x, int y)
{
  if(x>17)
    return;

  if(x==17){
    x++;
  }
  printf("%d\t",x); 
    
  display2(x,y);         
}
void display2(int x, int y)
{
  printf("%d\t",y*y);   
  x = x+5;             
  y++;                
     
  display1(x,y);    
}
