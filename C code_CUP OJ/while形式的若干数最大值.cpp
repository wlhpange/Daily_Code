#include<stdio.h>
int main()
{
int i=0,a,max=0;
while (scanf("%d",&a)!=EOF)
{
    if(a!= -1)
        {
        if(a>max)
        max = a;
        }
    else
        { 
        printf("%d",max); 
	    break;
        }
    }
    return 0;
}

