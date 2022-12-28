#include <stdio.h>
int main ()
{
    int r,r1,n,a=5,b=10;
    scanf("%d",&n);
    if (n%a==0||n%b==0)
    {
        r=n/10;
        if(n%10==5)
        {
            r1=1;
        }
        else
        {
            r1=0;
        }
        r=r1+r;
        printf("%d",r);
    }
    else
    printf("-1");
    
}