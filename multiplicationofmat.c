#include<stdio.h>
int main(){
	int r,c,i,j,k,a[10][10],b[10][10],m[10][10];
	
	printf("enter the rows = ");
	scanf("%d",&r);
	
	printf("enter the columns = ");
	scanf("%d",&c);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the 2nd matrix = \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	//multiplication of matrix
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			m[i][j]=0;
			for(k=0;k<c;k++){
				m[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	//displayingthematrix
	printf("\nresultnt matrix:\n");
	for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}
