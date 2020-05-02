#include<stdio.h>
double fun(double n)
{
double b;
 n=n*1000;
 b= (long)n%10;
 if(10-b<=5){
     n=n+10-b;
     n=(long)n;
     return (double)n/1000;
 }
 else {
     b=0;
     n=(long)n;
     return (double)n/1000;}
}
int main( )
{
    double a;
    scanf ("%lf", &a);
    printf ("%lf\n", fun( a ));
    return 0;
}

