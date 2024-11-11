#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *list = NULL;

void insertatfront(int data)
{
		struct node *p;
		p=(struct node *)malloc(sizeof(struct node *));
		p->info=data;
		p->next=NULL;
		
			if(list==NULL){
				list=p;
			}
			else{
				p->next=list;
				list=p;
			}
}

void deleteatbegin()
	{
	 struct node *p;
	 
	 if(list==NULL){
	 	printf("list is empty");
	} 	
	else{
		if(list->next==NULL){
			p=list;
			list=NULL;
			free(p);
		}
	} 
}

void display()
{
	struct node *p;
	p=list;
	
	if(list==NULL){
		printf("list is empty\n");
	}
	else{
			while(p!=NULL)
			{
				printf("%d->",p->info);
				p=p->next;
			}
				printf("\n");
	}
}

void deleteatend(){
	struct node *p,*q;
	
	if(list==NULL){
		printf("the list is empty");
	}
	else{
		if(list->next=NULL){
			q=list;
			list=NULL;
			free(q);
		}
		else{
			q=list;
			while(q->next !=NULL){
				q=q->next;
			}
			free(q);
		}
	}
}
void deleteatbetween(int n,int pos){
	int i;
	struct node *p,*q;
	
	if(list==NULL){
		list=p;
		
		if(list->next==NULL){
			free(list);
			list==NULL;
		}
	}
	else
	{
		if(pos==1){
			p=list;
			list=list->next;
			p->next=NULL;
			free(p);
		}
		else{
			for(i=1,q=list;i<pos-1 && q->next==NULL;i++,q=q->next)
			    ;
				if(q->next!=NULL){
					p=q->next;
					q->next=q->next->next;
					p->next=NULL;
					free(p);
				}
			}
		}
}
int main(){
	int ch,n,e;
	while(1)
	{
		printf("1.INSERT AT BEGIN\n");
		printf("2.DELETE AT BEGIN\n");
		printf("3.INSERT AT END\n");
		printf("4.DELETE AT END\n");
		printf("5.DISPLAY\n");
		printf("6.DELETE AT BETWEEN\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1 : printf("enter the value = ");
					 scanf("%d",&n);
					 insertatfront(n);
					 break;
					 
			case 2 : deleteatbegin();
					 break;
					 
			case 3 : printf("enter the value = ");
					 scanf("%d",&e);
					 break;
					 
			case 4 : deleteatend();
					 break;
					 
			case 5 : display();
					 break;
					 		 		 		 	 		 
		}
	}
}
