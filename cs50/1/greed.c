#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main()
{
  float change;
  int chng,coin=0;
  \
  do
  {
     printf("change:");
     change=GetFloat();
  }
  while(change <= 0);
  /* Assume that the only coins available are quarters 
	(25¢), dimes (10¢), nickels (5¢), and pennies (1¢).*/
	/*change could represent in dollars as well i.e. 9.75;0.75*/
	
  
  chng = round(change*100);
   
  if(chng >= 25)
  {
    coin=chng/25;
    chng=chng%25;
  }
     
  if(chng >= 10)
  {
    coin+=chng/10;
    chng=chng%10;
  }
   
  if(chng >= 5)
  {
    coin+=chng/5;
    chng=chng%5;
  }
  if(chng<5)
  {
    coin += chng;
  }
  printf("%d\n",coin);
  return 0;
}
