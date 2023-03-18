// 23.Write a C program to check the given input number is odd or even using switch case statement !!!

#include<stdio.h>
#include<conio.h>

int main(){
	
	int n;
	printf("Enter a number :\n");
	scanf("%d",&n);
	
	switch(n%2==0){
	
	 	case 1:
			printf("Even");
			break;
			
	 	case 0:
			printf("Odd");
	}
	
	getch();
	return 0;
}
