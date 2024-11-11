#include<stdio.h>
int main(){
	int t1=0, t2=1, nt=0, n;
	
	printf("enter the positive number :");
	scanf("%d",&n);
	
	printf("\nFibonacci series : %d, %d", t1, t2);
	nt = t1 + t2;
	
	while(nt<=n){
		
		printf("%d", nt);
		t1 = t2;
		t2 = nt;
		nt = t1 + t2;
	}
	return 0;
}
