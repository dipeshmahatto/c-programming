// example of rewind() in file handling..
#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	fp=fopen("ex.txt","r");
	char str[20];
	if(fp==NULL){
		printf("File can not open");
	}
	else {
	fseek(fp,-4,2);
	rewind(fp);
	int p=ftell(fp);
	printf("%d position",p);
	}
	fclose(fp);
	getch();
	return 0;
}
