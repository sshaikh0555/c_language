#include<stdio.h>
int main(){
	int rev=0,rem,n,num;
	printf("enter the number = ");
	scanf("%d",&n);
	n=num;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;

	}
	if(num==rev){
		printf("the number is palindrome");
	}
	else
	printf("the number is not palindrome");
}
