// 13. Write a C program to check whether a year is leap year or not.

#include<stdio.h>
#include<conio.h>

// 13. Write a C program to check whether a year is leap year or not.

int main(){
	int y;
	printf("Enter your value : \n");
	scanf("%d",&y);
	
	if((y%400 == 0) || (y%4==0) && (y%100!=0)){
		printf("This is leap year");
	} else {
		printf("This is not a leap year");
	}
	
	getch();
	return 0;
}
