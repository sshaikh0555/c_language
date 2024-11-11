#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the three number = ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=b & a<=c)
	printf("\n%d is between %d and %d",a,b,c);
	else
	printf("\n%d is not between %d and %d",a,b,c);
	
}
