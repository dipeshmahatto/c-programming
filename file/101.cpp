// fwite
#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	fp=fopen("college.txt","w");
	if(fp==NULL){
		printf("Error");
	} else{
		fputs("Kathmandu",fp);
		
	}
	fclose(fp);
	getch();
	return 0;
}
