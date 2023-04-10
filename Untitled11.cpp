#include<stdio.h>
#include<string.h>
struct bookdetail{
	int bid;
	char title[20];
	float price;
	int pages;
};
int main(){
	struct bookdetail book[100];
	struct bookdetail *p[100];
	
	int i,j;
	
	for(i=0;i<100;i++){
		p[i]=&book[i];
	}
	
	for(i=0;i<100;i++){
		printf("Enter the id of book %d:\t",i+1);
		scanf("%d",&p[i]->bid);
		printf("Enter the title of book %d:\t",i+1);
		fflush(stdin);
		gets(p[i]->title);
		printf("Enter the price of book %d:\t",i+1);
		scanf("%f",&p[i]->price);
		printf("Enter the pages of book %d:\t",i+1);
		scanf("%d",&p[i]->pages);
	}
	
	
	struct bookdetail *temp;
	for(i=0;i<100;i++){
		for(j=0;j<2;j++){
			
			if(strcmp(p[j]->title,p[j+1]->title)<0){
			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;
		}
		}
		
	}
	
	printf("The records in descending order are:\n");
	
	
	for(i=0;i<100;i++){
		printf("Title = %s\t ",p[i]->title);
		printf("Id= %d\t",p[i]->bid);
		printf("Price=%f\t",p[i]->price);
		printf("Pages=%d\t",p[i]->pages);
		
		printf("\n");
	}
	return 0;
	
}
