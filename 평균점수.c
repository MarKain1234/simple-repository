#include <stdio.h>
int main() {
	int a,b,c,d,e,i=0,avg;
	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a>=40){
	 a=a;}
	else if(a<40){
	a=40;
}
i+=a;
		if(b>=40){
	 b=b;}
	else if(b<40){
	b=40;
	
}
i+=b;
     
     	if(c>=40){
	 c=c;}
	else if(c<40){
	c=40;
}
i+=c;
     
     	if(d>=40){
	 d=d;}
	else if(d<40){
	d=40;
}
i+=d;
     
     	if(e>=40){
	 e=e;}
	else if(e<40){
	e=40;
}
i+=e;
     printf("%d",i/5);
     
	
}
