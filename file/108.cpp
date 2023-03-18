// P T R C from file "one.txt" and delete words "name" and "ram" and write remaining content into another file name "two.txt"
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	FILE *a,*b;
	char s[20];
	a=fopen("one.txt","r");
	if(a==NULL){
		printf("Error...");
	}
	b=fopen("two.txt","w");
	if(b==NULL){
		printf("Error...");
	}
	while(fscanf(a,"%s",&s)!=EOF){
		if(strcmp("name",s)!=0 && strcmp("ram",s)!=0){
			fprintf(b,"%s ",s);
		}
	}
	
	fclose(a);
	fclose(b);
	getch();
	return 0;
}
