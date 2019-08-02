#include <stdio.h>

int
main ()
{
  int a;

  printf ("enter marks:");
  scanf ("%d", &a);
 
  if(a>=90) 
    printf ("grade A");
   else if (a>=70 && a<90)
     printf ("grade B");
    else if (a>=50 && a<70)
     printf ("grade C");
    else if (a>=32 && a<50)
     printf ("Grade D");
    else 
    printf ("FAIL");
    
}