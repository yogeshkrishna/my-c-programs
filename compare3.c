#include <stdio.h>

int
main ()
{
  int a, b, c;
  printf ("enter 3 different numbers to compare\n");
  printf ("enter first number ==");
  scanf ("%d", &a);
  printf ("enter second number ==");
  scanf ("%d", &b);
  printf ("enter third number ==");
  scanf ("%d", &c);
  
  if(a>b) {
      if (a>c)
        printf ("first number is the greatest of all 3 numbers entered %d %d %d", a,b,c);
      else //c>a
        printf ("third number is the greatest of all 3 numbers entered %d %d %d", a,b,c);
  }
  else {  //b>a
      if(b>c)
        printf ("second number is the greatest of all 3 numbers entered %d %d %d", a,b,c);
      else //c>b
        printf ("third number is the greatest of all 3 numbers entered %d %d %d", a,b,c);
  }
  

}