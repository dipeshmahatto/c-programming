// fwite w+
#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char str[20];
	fp=fopen("cc.txt","w+");
	if(fp==NULL){
		printf("Error...");
	} else{
		fputs("Hello Everyone",fp);
		rewind(fp);
		fgets(str,20,fp);
		printf("%s",str);
	}
	fclose(fp);
	getch();
	return 0;
}
