// fwite
#include<stdio.h>
#include<conio.h>

	
	struct student{
		int id;
		char name[20];
		float fee;
		};
int main(){
	
	struct student s;
	FILE *fp;
	fp=fopen("std.dat","w");
	if(fp==NULL){
		printf("Error");
	} else{
		printf("Enter id, name, fee:\n");
		scanf("%d%s%f",&s.id,s.name,&s.fee);
		fwrite(&s,sizeof(s),1,fp);
		printf("Data written successfully ");
		
	}
	
	getch();
	return 0;
}
