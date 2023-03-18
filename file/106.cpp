// WACP to copy the contents of "student.txt" into another file called "info.txt" ?

#include<stdio.h>
#include<conio.h>
int main(){
	FILE *f1, *f2;
	char str[21];
	
	f1=fopen("student.txt","r");
	if(f1==NULL){
		printf("Error...");
	}
	
	f2=fopen("info.txt","w");
	if(f2==NULL){
		printf("Error...");
	}
//	fputs("computer is an electronic device",f1);
	while(fscanf(f1,"%s",&str)!=EOF){
		fprintf(f2,"%s",str);
	}
	fclose(f1);
	fclose(f2);
	getch();
	return 0;
}
