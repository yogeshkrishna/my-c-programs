#include <stdio.h>

int
main ()
{
  int a, b, operation;

  printf ("enter value a ==");
  scanf ("%d", &a);
  printf ("enter value b ==");
  scanf ("%d", &b);
  printf
    ("chose your operator (enter the number of the operator):-\n 1-additon\n 2-subtraction\n 3-multiplication\n 4-division\n");
  scanf ("%d", &operation);
  if (operation == 1)
    printf (" sum: %d + %d = %d", a, b, a + b);

  if (operation == 2)
    printf ("difference: %d - %d = %d", a, b, a - b);

  if (operation == 3)
    printf ("product: %d * %d = %d", a, b, a * b);

  if (operation == 4)
    {
      printf ("quotient: %d / %d = %d \n", a, b, a / b);

      printf ("remainder: %d mod %d = %d", a, b, a % b);

    }

}