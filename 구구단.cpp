#include <stdio.h>
int main(){
	int i,N,P=0;
	
	scanf("%d",&N);
	
	for(i=1; i<=9; i=i+1){
		P = N * i;
		printf("%d * %d = %d\n",N,i,P);
	}
}
