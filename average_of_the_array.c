#include <stdio.h>
int main ()
{
    int i,n;
    float avg,sum=0;
    scanf("%d",&n);
    float a[n];
    for (i=1;i<=n;i++)
    {
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%0.2f",avg);
}