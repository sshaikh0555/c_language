#include<stdio.h>
int main(){
	int r,c,i,j,a[10][10],b[10][10],m[10][10];
	
	printf("enter the rows = ");
	scanf("%d",&r);
	
	printf("enter the columns = ");
	scanf("%d",&c);
	
	printf("enter 1st matrix = \n");
	for(i=0;i<r;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the 2nd materix = \n");
	for(i=0;i<r;i++){
		for(j=0;j<m;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("enter the 3rd matrix = \n");
	for(i=0;i<r;i++){
		for(j=0;j<m;j++){
			scanf("%d",&m[i][j]);
		}
	}
	//logic for lower triangles
	for(i=0;i<r;i++){
		printf("\n");
		for(j=0;j<m;j++){
			if(i>=j){
				printf("%d",a[i][j]);
			}
		}
	}
}
