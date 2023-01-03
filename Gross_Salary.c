#include <stdio.h>
int main ()
{
    float b,da,hra,bs;
    scanf("%f",&b);
    if(b<=10000)
    {
        da=0.8*b;
        hra=0.2*b;
    }
    else if(b<=20000&&b>10000)
    {
        da=0.9*b;
        hra=0.25*b;
    }
    else if(b>20000)
    {
        da=0.95*b;
        hra=0.3*b;
    }
    else
    {
        printf("invalid choice");
    }
    bs=b+da+hra;
    printf("%0.2f",bs);
}