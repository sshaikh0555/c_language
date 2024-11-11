#include<stdio.h>
int main(){
	int n1,n2;
	printf("enter number 1:");
	scanf("%d",&n1);
	
	printf("enter number 2:");
	scanf("%d",&n2);
	
	for(int i=n1;i<=n2;i++){
	
		for(int j=1;j<=10;j++){
			printf("%d\n",i*j);
		}
		printf("\n");
	}
}
