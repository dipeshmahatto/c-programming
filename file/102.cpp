// fwite a
#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	fp=fopen("college.txt","a");
	if(fp==NULL){
		printf("Error");
	} else{
		fputs(" Nepal",fp);
		
	}
	fclose(fp);
	getch();
	return 0;
}
