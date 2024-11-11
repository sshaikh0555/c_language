#include<stdio.h>
int main(){
	int length1,length2,breadth,height,base,choice,length3;
	printf("enter the length = ");
	scanf("%d",&length1);
	
	printf("enter the length = ");
	scanf("%d",&length2);
	
	printf("enter the length = ");
	scanf("%d",&length3);
	
	printf("enter the breadth = ");
	scanf("%d",&breadth);
	
	printf("enter the height = ");
	scanf("%d",&height);
	
	printf("enter the base = ");
	scanf("%d",&base);
	
	printf("\n1.area of square");
	printf("\n2.area of rectangle");
	printf("\n3.area of triangle");
	
	printf("\nenter your choice = ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1 : printf("area of square = %d",length1*length1);
		break;		
		case 2 : printf("area of rectangle = %d",length2*breadth);
		break;
		case 3 : printf("area of triangle = %d",length3*base*height);
		break;
		}
}
