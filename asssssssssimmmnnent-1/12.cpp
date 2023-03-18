// 12. Write a program to check the given input number is divisible by 7 or 9 or not.

#include<stdio.h>
#include<conio.h>

int main(){
	int y;
	printf("Enter the number :\n");
	scanf("%d",&y);
	
	if(y%7==0){
		printf("%d is divisible by 7",y);
	} else if(y%9==0){
		printf("%d is divisible by 9",y);
	} else {
		printf("%d is not divisible by 7 or 9",y);
	}
	
	getch();
	return 0;
}
