#include<stdio.h>
#include<string.h>
int main(){
	char i,s[100],n[100];
	
	printf("enter the string = ");
	gets(s);
	
	for(i=0;s[i]!='\0';i++){
		if(s[i]>=97 && s[i]<=122){
			printf("%c",s[i]-32);
		}
	}
		if(s[i]>=65 && s[i]<=90){
			printf("%c",s[i]+32);
		}
		if(s[i]==' '){
			printf("%c",'*');
		}
		if(s[i]>='0' && s[i]<='9'){
			printf("%c",'?');
		}
}
	puts(s);
