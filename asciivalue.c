#include<stdio.h>
int main(){
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	
	printf("ASCII value- %d",ch);
	printf("next %c",ch+1);
	printf("previous- %c",ch-1);
	
}
