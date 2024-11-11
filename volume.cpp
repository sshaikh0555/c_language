#include<stdio.h>
int main(){
	int l,b,h,sa,v;
	
	printf("enter the length = ");
	scanf("%d",&l);
	
	printf("enter the breadth = ");
	scanf("%d",&b);
	
	printf("enter the height = ");
	scanf("%d",&h);
	
	sa=2*(l*b+l*h+b*h);
	v=l*b*h;
	
	printf("answer is %d\n",sa);
	printf("answer is %d",v);
}
