#include<stdio.h>
int main()
{
    int a,max,min;
    long n;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%ld",&n);
             if(n%2!=0)
             {printf("0 0\n");}
             else
             {
                 if(n%4!=0)
                 {max=n/2;
                 min=(n-(n/4)*4)/2+(n/4);
                 printf("%d %d\n",min,max);}
                 else
                 {
                     max=n/2;
                     min=n/4;
                     printf("%d %d\n",min,max);
                 }
            }
       
   }
    return 0;
}
