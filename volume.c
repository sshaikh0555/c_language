#include<stdio.h>
int main(){
	float rad,h,vol,sa;
	printf("enter the radius =");
	scanf("%f",&rad);
	printf("enter the height=");
	scanf("%f",&h);
	
	sa=2*3.14*rad*(rad+h);
	vol=3.14*rad*rad*h;
	
	printf("the surface  value is %f",sa);
	printf("the volume is %f",vol);
}
