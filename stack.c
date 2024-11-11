#include<stdio.h>
int stack[10];
int top = -1;

	int isFull(){
		if((top + 1)==10)
			return 1;
		
			return 0;
		
}

	int isEmpty(){
		if(top==-1)
			return 1;
		
		return 0;
	}

	void peek(){
		printf("\nthe element is at top is %d",stack[top]);
}

void push(){
		int val;
		printf("\nenter value = ");
		scanf("%d",&val);
		if(!isFull()){
			stack[++top]=val;
		}
		else{
		printf("stack is full");
		}
		}
	
void pop(){
		if(!isEmpty()){
			top--;
		}
		else{
			printf("you cannot delete, the stack is empty");
		}
}
	void display(){
		printf("\n");
		if(!isEmpty()){
		int i;
		for(i=0;i<=top;i++){
			printf("%d\t",stack[i]);
		}
		printf("\n");
	}
	else{
		printf("stack is empty");
	}
}
	
void search(){
		int n,i,flag=0;
		printf("enter the value to search = ");
		scanf("%d",&n);
		
		if(!isEmpty()){
			for(i=0;i<=top;i++){
				if(stack[i]==n){
					flag = 1;
				}
			}
			if(flag == 1){
				printf("value you searched is available");
			}
			else{
				printf("value you searched is not available");
			}
		}
	}


int main(){
	int ch;
	while(1){
	printf("\n1. PUSH\n");
	printf("2. POP\n");
	printf("3. PEAK\n");
	printf("4. DISPLAY\n");
	printf("5. SEARCH\n");
	
	printf("enter your choice = ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1: push();
		break;
		
		case 2: pop();
		break;
		
		case 3: peek();
		break;
		
		case 4: display();
		break;
		
		case 5: search();
		break;
		
		default : printf("wrong choice");
		}
	
	}
	
}



	
	
	
	

