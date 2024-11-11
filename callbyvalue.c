#include<stdio.h>
void swap(int *,int *);

int main(){
	int a=5, b=10;
	swap(&a,&b);
	
	printf("a = %d",a);
	printf("b = %d",b);
}
void swap(int*a,int*b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
