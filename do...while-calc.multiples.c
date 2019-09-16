#include <stdio.h>

int main()
{
     int a=1,n,t;
    
    printf("enter a number and its max multiples required:-");
    scanf("%d,%d",&n,&t);
    
    do
    {
        printf("%d*%d=%d\n",n,a,n*a);
        a++;
    }
    while(a<=t);
    
    return 0;
    
}
