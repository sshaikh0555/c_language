#include<stdio.h>
#include<conio.h>
int main(){

	float r,a,v,c;
	float pi=3.14;
	int ch;
	printf("1.area of circle\n2.Circumference of circle\n3.volume of sphere\n");
	printf("enter your choice = ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1 : printf("enter the area of circle = ");
		         scanf("%f",&a);
				 a = pi * r * r;
				 printf("\narea of circle is %f",a);
			break;
			
		case 2 : printf("enter the radius of circle = ");
				 scanf("%f",&r);
				 c = 2 * pi * r;
				 printf("\n circumference of circle = ",c);
			break;
			
		case 3 : printf("enter the volume of sphere = ");
		         scanf("%f",&v);
		         v = (4/3) * r * r * r;
		         printf("\nenter the volume of sphere = ");
		    break;
		    
		    	 default : printf("\ninvalid");
	}
}
