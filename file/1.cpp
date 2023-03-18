// example of formatted input and output function in file handling..
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
	fgets(str,10,fp);
//	printf("%s\n",str);
	fseek(fp,-4,2);
	fgets(str,10,fp);
	printf("%s\n",str);
	}
	fclose(fp);
	getch();
	return 0;
}
