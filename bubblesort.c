#include<stdio.h>
#include<string.h>

struct student{
	int roll_no;
	char name[100];
	int percentage;
}student;

int main(){
	struct student s[10];
	int temp;
	char tempstr[100];
	int n,i,j;
	printf("how many student - ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("roll_no - ");
		scanf("%d",&s[i].roll_no);
		printf("name - ");
		scanf("%s",&s[i].name);
		printf("percentage - ");
		scanf("%d",&s[i].percentage);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			
			if(s[j].percentage<s[j+1].percentage){
				
			temp= s[j].roll_no;
			s[j].roll_no =s[j+1].roll_no;
			s[j+1].roll_no=temp;
			
			temp=s[j].percentage;
			s[j].percentage=s[j+1].percentage;
			s[j+1].percentage=temp;
						
			strcpy(tempstr,s[j].name);
			strcpy(s[j+1].name,s[j+1].name);
			strcpy(s[j+1].name,tempstr);
		}
	}
	
	printf("----------- DATA IN DECENDING ORDER IS --------------");
		for(i=0;i<n;i++){
		printf("name - %s\n",s[i].name);
		printf("roll_no - %d\n",s[i].roll_no);
		printf("percentage - %d\n",s[i].percentage);
	}
  } 
}
