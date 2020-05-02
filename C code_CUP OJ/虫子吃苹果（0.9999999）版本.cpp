#include<stdio.h>
#define PT 0.9999999999999999
int main()
{
	int n,p;
	float y,x;
	scanf("%d %d %d",&n,&x,&y);
	if(y/x>=n){
		printf("0");
	}
	else{
		p=n-(int)(y/x+PT);
		printf("%d",p);
	}
	return 0;
}
