#include<stdio.h>
int main(){
	int i,j,r,c,a[10][10];
	
	printf("enter the row = ");
	scanf("%d",&r);
	
	printf("enter the column = ");
	scanf("%d",&c);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	//logic for lower triangle 
	for(i=0;i<r;i++){
		printf("\n");
		for(j=0;j<c;j++){
			if(i<=j){
				printf("%d\t",a[i][j]);
			}
		}
	}
}
