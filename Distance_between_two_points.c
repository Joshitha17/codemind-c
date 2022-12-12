#include <stdio.h>
#include <math.h>
int main ()
{
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    int x,y;
    x=pow((x2-x1),2);
    y=pow((y2-y1),2);
    float d;
    d=sqrt(x+y);
    printf("%0.4f",d);
}