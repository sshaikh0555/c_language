#include<stdio.h>
int main(){
	int array[40];
	int count=0;
	int i=0,n,occ;
	printf("enter n no to find occurance = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		}
			
	printf("enter the number to check occurance = ");
	scanf("%d",&occ);
	
	for(i=0;i<n;i++)
	{	
		if(array[i] == occ)
		{
			count++;
		}
	}
	{
	printf("the occurance of %d is %d",occ,count);
}
}
