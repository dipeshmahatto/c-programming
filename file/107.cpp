// program to read only even number into the file name "even.txt" ?
#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	int i,sum=0;
	fp=fopen("even.txt","w");
	if(fp==NULL){
		printf("Error...");
	}
	for(i=1;i<=100;i++){
		if(i%2==0)
			sum=sum+i;
	}
	fprintf(fp,"Total sum=%d",sum);
	fclose(fp);
	getch();
	return 0;
}
