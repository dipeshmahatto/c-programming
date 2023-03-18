// fwite w+
#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char str[20];
	fp=fopen("cc.txt","r+");
	if(fp==NULL){
		printf("Error...");
	} else{
		
		fgets(str,20,fp);
		printf("%s",str);
		fputs(" Bernhardt",fp);
	}
	fclose(fp);
	getch();
	return 0;
}
