// fwite a+
#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char str[50];
	fp=fopen("cc.txt","a+");
	if(fp==NULL){
		printf("Error...");
	} else{
		fputs(" Hi",fp);
		rewind(fp);
		fgets(str,40,fp);
		printf("%s",str);
	}
	fclose(fp);
	getch();
	return 0;
}
