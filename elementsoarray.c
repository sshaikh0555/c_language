#include<stdio.h>
int main(){
	int n,array[10],i,sum=0;
	printf("enter no of element to enter in an array = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",array[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+array[i];
	}
	printf("total is = %d",sum);
}
