#include<stdio.h>
int main(){
	int r,n,i,sum,temp=0;
	
	printf("enter number = ");
	scanf("%d",&n);
	temp = n;
	while(n>0){
	r=n%10;
	sum = sum+(r*r*r);
	n=n/10;
}
	if(temp==sum)
	printf("its an armstrong number",temp);

	else
	printf("it is not an armstrong number",temp);
}
