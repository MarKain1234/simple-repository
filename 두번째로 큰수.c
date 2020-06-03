#include <stdio.h>
int main (){
	int A,B,C;
	
	scanf("%d %d %d",	&A, &B, &C);
	if(A<B){
		if(A>B){
			if(C<A)
			printf("%d\n",C);
			else printf("%d\n",A);
			
		}	
		else printf("%d\n",B);
		
}
	else{
		if(B>C){
			if(C<A) printf("%d\n",A);
			else printf("%d\n",C);
			
		}
		else printf("%d\n,",B);
}
}
