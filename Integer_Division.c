#include <stdio.h>
int main ()
{
    long long int n;
    scanf("%lld",&n);
    if(n%10==0)
    {
        n/=10;
        printf("%lld",n);
    }
    else
    {
        if(n%10>=0.5)
        {
            n/=10;
            printf("%lld",n);
        }
        else
        {
            n/=10;
            printf("%lld",--n);
        }
    }
}