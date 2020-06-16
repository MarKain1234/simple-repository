#include <stdio.h>
int main(){
	int T,i,a,b;
		scanf("%d",&T);
	int sum=0;
	for(i=1; i<=T; i=i+1){
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
}
