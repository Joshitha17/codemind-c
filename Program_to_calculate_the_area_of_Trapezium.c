#include <stdio.h>
int main ()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    float area;
    area=(a+b)*h/2.0;
    printf("%0.4f",area);
}