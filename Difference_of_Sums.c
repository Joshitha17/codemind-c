#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    int sq,sum1=0,d;
    sq=sum*sum;
    for(i=1;i<=n;i++)
    {
        sum1=sum1+i*i;
    }
    d=sq-sum1;
    printf("%d",d);
    
}