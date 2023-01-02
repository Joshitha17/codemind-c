#include <stdio.h>
int main ()
{
    float basic,hra,da;
    scanf("%f %f %f",&basic,&hra,&da);
    float pf,gs;
    pf=basic*0.12;
    gs=basic+hra+da+pf;
    printf("%0.2f
%0.2f",pf,gs);
}