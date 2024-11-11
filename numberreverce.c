#include<stdio.h>
int main(){
	int n,reverse=0,rem=0;
	
	printf("enter the number =");
	scanf("%d",&n);

    
	while(n>0){
		rem=n%10;
		reverse= reverse * 10 + rem;
		n=n/10;
	}
	
	printf("reverse",reverse);	
	
	while(reverse >0){
	
	rem = reverse%10;
	
	switch(rem){
	case 0 : printf("\nzero");
			 break;
			 
	case 1 :printf("\none");
	 		 break;
			  
	case 2 : printf("\ntwo" );
			 break;
			 
	case 3 : printf("\nthree" );
	  	     break;
			   
	case 4 : printf("\nfour");		   		 
		  	 break;
			   
	case 5 : printf("\nfive");		   	 
			 break;
			 
	case 6 : printf("\nsix");
	         break;
			 
	case 7 : printf("\nseven");
	   	     break;
				
	case 8 : printf("\neight");
			 break;
			 
	case 9 : printf("\nnine");
			 break;	
			 
	default : printf("\ninvalid");	 					 		 
}
reverse/=10;
}}
