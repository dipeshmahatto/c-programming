// 22.Write a C program to find the largest number between two input numbers using switch case statement !!!

#include<stdio.h>
#include<conio.h>

int main(){
	
	int a,b,l;
	printf("Enter the value of a & b :\n");
	scanf("%d%d",&a,&b);
	
	switch(a>b){
	
	 	case 1:
			printf("%d is the largest number",a);
			break;
			
	 	case 0:
			printf("%d is the largest number",b);
	}
	
	getch();
	return 0;
}
