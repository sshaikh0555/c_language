#include<stdio.h>
int main(){
	float radius,height,surface_area,volume;
	printf("enter value of volume & area - ");
	scanf("%f,%f",&volume,&surface_area);
	surface_area = 2*(22/7)*radius*(radius+height);
	volume = (22/7)*radius*radius*height;
	
	printf("surface area is %f",surface_area);
	printf("volume is %f",volume);	
}
