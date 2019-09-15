/*Find the sum of first N natural numbers where N is a value accepted from user that is less than or equal to 10*/

#include <stdio.h>

int main()
{
    int n,sum;
    
    do
    {
        printf("enter the number of the first natural nos to be summed(10 or below): ");
        scanf("%d",&n);
        if(n>10) 
            printf("\nInvalid input. Number should be less than or equal to 10. Try again.\n");
    } while (n>10);
    
    for(int c=1,sum=0; c<=n ; sum+=c,c++);
    
    
    printf("\nSum of first %d natural numbers is %d", n, sum);
    
    return 0;
}
