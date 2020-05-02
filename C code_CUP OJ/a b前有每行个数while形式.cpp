#include<stdio.h>
int main(){
	int a,b,c,n;
	while(scanf("%d",&n)){
		a=0;
		while(n--){
			scanf("%d",&b);
			a+=b;
		}
		printf("%d\n",a);
	}
	   
	   return 0;
}
