#include <stdio.h>

int main()
{
     int n=1;
    
    printf("the first 10 natural numbers are:-\n");
    
    while(n<=10)
    {
        printf("%d\n",n);
        n++;
    }
    
    
    n=10;
    
    printf("the first 10 natural numbers in backwards are:-\n");
    
    while(n>=1)
    {
        printf("%d\n",n);
        n--;
    }
    
    return 0;
}
