#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,x,y;
    float g,rez1,rez2,rez3,rez4;
    printf("intodu numerele\n");
    scanf("%d%d%d%d",&a,&b,&x,&y);
    rez1=sqrt((a-cos(x))/(b-sin(a)));
    rez2=-x*a+rez1;
    rez3=expf(rez2);
    rez4=(tan(a)+12*x)/(x-pow(y,2));
    g=rez3/rez4;
    printf("g=%f",g);

    return 0;
}











