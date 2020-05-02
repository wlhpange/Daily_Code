#include<stdio.h>
#inclues<math.h>
int main()
{
    double x1,x0;
    scanf("%lf",&x1);
    while(fabs(x0-x1)<0.000001){
    x0=x1;
    x1=cos(x0);
    }
    printf("%f",x1);
    return 0;
}
