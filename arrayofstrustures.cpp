#include<stdio.h>
struct stud{
	int roll;
	char name[20];
	int marks[3];
	int percentage;
};
int main(){
	struct stud s[10];
	int i,total=0,n,per,j;
	printf("how much student you want to enter = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\nenter name of student - ",i++);
		scanf("%s",&s[i].name);
	}
	printf("\nenter the roll no of student = ");
	scanf("%d",&s[i].roll);
	
	total=0;
	for(j=0;j<3;j++){
		printf("\nenter marks of subject - ",i++);
		scanf("%d",&s[i].marks[j]);
		total = total+s[i].marks[j];
	}
	per = total/3;
	s[i].percentage=per;
	
	// display
	for(i=0;i<n;i++){
		printf("roll_no - %d\n",s[i].roll);
		printf("\nname - %s",&s[i].name);
	}
	
	for(j=0;j<3;j++){
		printf("marks of the subject - %d\n",i+1,s[i].marks[j]);
	}
	printf("percentage - %d\n",s[i].percentage);
}
