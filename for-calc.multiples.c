#include <stdio.h>

int main()
{
     int a,n,t;
    
    printf("enter a number and its max multiples required:-");
    scanf("%d,%d",&n,&t);
    
    for(a=1;a<=t;a++)
    {
        printf("%d*%d=%d\n",n,a,n*a);
    }
    
    return 0;
    
}
