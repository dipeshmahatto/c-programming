// 11. Write a program to check the given input number is odd or even.

#include<stdio.h>
#include<conio.h>

int main(){
	int x;
	printf("Enter the number:\n");
	scanf("%d",&x);
	
	if(x%2==0){
		printf("%d is the Even number",x);
	}else{
		printf("%d is the Odd number",x);
	}
	
	getch();
	return 0;
}
