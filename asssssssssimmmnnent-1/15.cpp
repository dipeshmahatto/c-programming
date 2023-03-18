/* 15. Program to input a mark in a subject of a student and check if the student is pass or not. (Pass
Marks>=35)
*/

#include<stdio.h>
#include<conio.h>

int main(){
	char sub;
	int marks;
	printf("E = English \nM = Math \nA = Account \nC = C-programming\n");
	printf("Choose your subject :\n");
	scanf("%c",&sub);
	


	switch(sub){

		case 'E': 
			printf("Enter your English mark:\n");
			scanf("%d",&marks);
			if(marks>=35){
				printf("Pass");
				} else{
				printf("Fail");
				}
			break;
		
		case 'M': 
			printf("Enter your Math mark:\n");
			scanf("%d",&marks);
			if(marks>=35){
				printf("Pass");
			} else {
				printf("Fail");
			}
			break;
			
		case 'A': 
			printf("Enter your Account mark:\n");
			scanf("%d",&marks);
			if(marks>=35){
				printf("Pass");
			} else {
				printf("Fail");
			}
			break;
			
		case 'C': 
			printf("Enter your C-programming mark:\n");
			scanf("%d",&marks);
			if(marks>=35){
				printf("Pass");
			} else {
				printf("Fail");
			}
			break;
			
		default	: 
			printf("Worng input");
	}			
	
	getch();
	return 0;
}
