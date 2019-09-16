#include <stdio.h>

int main()
{
     int a=1,n,t;
    
    printf("enter a number and its max multiples required:-");
    scanf("%d,%d",&n,&t);
    
    while(a<=t)
    {
        printf("%d*%d=%d\n",n,a,n*a);
        a++;
    }
    
    return 0;
    
}
