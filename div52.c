#include <stdio.h>

int
main ()
{
  int a;

  printf ("enter number:");
  scanf ("%d", &a);
 
  if(a%5==0 && a%2==0) 
    printf ("number is divisible by 5 and 2");
  else if (a%5 == 0)
    printf ("number is  divisble by 5 only");
   else if (a%2 == 0)
     printf ("number is  divisble by 2 only");
    else
    printf ("number is  neither divisble by 5 nor 2");
    
}