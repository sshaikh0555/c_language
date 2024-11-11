#include<stdio.h>
int main(){
	float rec_height;
	float rec_width;
	float rec_perimeter;
	
	printf("enter the height of rectangle = ");
	scanf("%f",&rec_height);
	
	printf("enter the width of the rectangle = ");
	scanf("%f",&rec_width);
	
	rec_perimeter = 2.0 * (rec_height +	rec_width);
	
	printf("perimeter of rectangle = %f\n",rec_perimeter);
}
