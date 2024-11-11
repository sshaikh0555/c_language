#include<stdio.h>
int main(){
	int i,j,r,a[10][10],b[10][10],c[10][10];
	
	printf("enter the column & row = ");
	scanf("%d\n",&r);
	
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
    printf("\nenter element for 2nd matrix:\n");
    
    for(i=0;i<r;i++){
    	for(j=0;j<r;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
    //add
    for(i=0;i<r;i++){
    	for(j=0;j<r;j++){
			c[i][j]=b[i][j]+a[i][j];
		}
	}
	
	//display the resultant matrix
	printf("\nresultnt matrix:\n");
	for(i=0;i<r;i++){
    	for(j=0;j<r;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
