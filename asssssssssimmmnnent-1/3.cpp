// 3. Write a program to take two input and find the sum, difference, product, division and reminder.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int a,b;
	printf("Enter the value of a & b:\n");
	scanf("%d%d",&a,&b);
	
	printf("Sum = %d \n",a+b);
	printf("Difference = %d \n",a-b);
	printf("Product = %d\n",a*b);
	printf("Division = %d\n",a/b);
	printf("Reminder = %d\n",a%b);
	
	getch();
	return 0;
}
