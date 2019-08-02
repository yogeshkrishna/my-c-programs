#include <stdio.h>

int
main ()
{
  int a, b, operation;

  printf ("enter first number ==");
  scanf ("%d", &a);
  printf ("enter second number ==");
  scanf ("%d", &b);
  
  if(a>b)
    printf ("first number %d is greater than second number %d", a,b);
  else if (b>a)
    printf ("second number %d is greater than first number %d", b,a);
  else
    printf ("both numbers are equal (%d)",a);
    
}