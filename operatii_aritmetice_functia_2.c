#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,x,y;
    float F,rez1,rez2;
    printf("intodu numerele\n");
    scanf("%d%d%d",&a,&x,&y);
    rez1=abs(pow(y,a))+abs(10+sin(pow(a,2)));
    rez2=sqrt(cos(pow(x,2))+sin(pow(y,2)));

    F=rez1/rez2;
    printf("F=%f",F);

    return 0;
}
