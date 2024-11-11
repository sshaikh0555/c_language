#include<stdio.h>
int main(){
	float BS,HRA,DA,PT,IS;
	
	printf("enter the basic salary = ");
	scanf("%f",&BS);
	
	HRA = (0.1)*BS;
	DA = (0.3)*BS;
	PT = (0.05)*BS;
	
	IS = BS+HRA+DA-PT;
	
	printf("10 percent of BS - %f",HRA);
	printf("\n30 percent of BS - %f",DA);
	printf("\n5 percent of BS - %f",PT);
	printf("\ninhand salary - %f",IS);
	
}
