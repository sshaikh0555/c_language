#include<stdio.h>

void oddEven(int);

int main (){
	int n;
	printf("enter the the number:");
	scanf("%d",&n);
	
	oddEven(n);
}

void oddEven(int n){
	if(n%2 == 0){
		printf("the number is even");
	}else{
		printf("the number is odd");
	}
}
