#include <stdio.h>
int main(){
	int A,B,T,I;
	
	scanf("%d\n",&T);
	
	for(I=1; I<=T; I=I+1){
		scanf("%d %d",&A, &B);
		printf("%d",A+B);
	}
	
}

