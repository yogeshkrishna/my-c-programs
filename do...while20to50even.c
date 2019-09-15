#include <stdio.h>

int main()
{
     int n=20;
    
    printf("the even numbers between 20 and 50 are:-\n");
    
    do
    {
        printf("%d\n",n);
        n+=2;
    }
    while(n<=50);
    
    return 0;
    
}
