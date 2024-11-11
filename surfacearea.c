#include<stdio.h>
int main(){
	float L,B,H,LD,BD,LW,BW,roomtobepainted,roomtobewhitewashed;
	
	printf("enter the lenght,breadth,height of room =" );
	scanf("%f %f %f",&L,&B,&H);
	
	printf("enter the lenghth & breadth of room = ");
	scanf("%f %f",&LD,&BD);
	
	printf("enter the length & breadth of window = ");
	scanf("%f %f",&LW,&BW);
	
	printf("l - %f",L);
	printf("b - %f",B);
	printf("h - %f",H);
	printf("ld -%f",LD);
	printf("bd -%f",BD);
	printf("lw - %f",LW);
	printf("bw - %f",BW);
	
	
	roomtobepainted = (2*((B*H )+ (H*L))-((LD+BD)+(2*(LW+BW))));
	
	//roomtobewhitewashed = 2*(B*H+L)-(LD+BD)+2*(LW+BW);
	
	printf("\narea to be printed = %f",roomtobepainted);
	//printf("\narea to be printed =",roomtobewhitewashed);
}
