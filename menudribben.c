#include<stdio.h>
int main(){
	int number1,number2,number3,choice;
	printf("enter two numbers = ");
	scanf("%d %d",&number1,&number2);
	
	printf("\n1.Equality ");
	printf("\n2.less than ");
	printf("\n3.rem/quo");
	printf("\n4.range");
	printf("\n5.swap");
	
	printf("\nenter your choice = ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1 : if(number1==number2)
		{
				printf("two numbers are equal");
		}
				else{
				printf("numbers are not equal");
				break;
			}
		
		case 2 : if(number1<number2)
		{
				printf("number is less than num 2");
		}
				else{
				printf("number 2 is less than number 1");
	 			break;
		}
		
		
		case 3 : number3 = number1/number2;
				printf("quotient is %d",&number3);
		
				number3 = number1 % number2;
		
				printf("remainder is %d",&number3);
		break;
		
		case 4 : printf("enter a number to check a range = ");
				scanf("%d",&number3);
		
				if((number3 > number1)&&(number3 < number2))
		{
				printf("it is between number1 & number2");
		}
				else {
				printf("it is not in range");
				break;
		}
		
		case 5 : printf("enter first number = ");
				scanf("%d",&number1);
				printf("enter second number = ");
				scanf("%d",&number2);
			
			 	if((number3=number1)&&(number1=number2)&&(number2=number3))
			
				printf("\n after swapping first number = %d",&number1);
				printf("\n after swapping second number = %d",&number2);
				break;
			
				default: printf("wrong choice!!\n");
			
	}
}
