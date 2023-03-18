
// Write a program to find the sum,difference,product,quotient and reminder of two input number given by user

#include<stdio.h>
#include<conio.h>

int main(){
	int x,y;
	printf("Enter the value of x and y:\n");
	scanf("%d%d",&x,&y);
	
	printf("Sum :%d \n",x+y);
	
	printf("Difference :%d \n",x-y);
	
	printf("Product :%d \n",x*y);
	
	printf("Quotient :%d \n",x/y);
	
	printf("Reminder :%d",x % y);
	
	getch();
	return 0;
}
