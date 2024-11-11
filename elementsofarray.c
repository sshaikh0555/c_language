#include<stdio.h>
int main(){
	int n,i,a[10],b[10],c[10],m,k=0;
	printf("enter the size of 1st array = ");
	scanf("%d",&m);
	
	printf("enter the size of 2nd array = ");
	scanf("%d",&n);
	
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
		c[k++]=a[i];
	}
	printf("enter the element of second array = ");
	
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		c[k++]=b[i];
	}
	printf("the merged array is-");
	for(i=0;i<k;i++){
		printf("%d\t",c[i]);
	}
}
