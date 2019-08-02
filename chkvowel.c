#include <stdio.h>

int
main ()
{
  char a;
  printf ("enter a character:\n");
  scanf ("%c", &a);
  
  
  if(a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a =='U') 
      printf ("The character entered %c is a vowel", a);
  else
    printf ("The character entered %c is a consonant", a);

}