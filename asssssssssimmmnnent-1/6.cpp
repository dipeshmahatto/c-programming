/* 6. Write a program to convert the temperature given in Celsius into equivalent Fahrenheit.
[F=9/5*C+32] */

#include<stdio.h>
#include<conio.h>

int main(){
	float c,f;
	printf("Enter the temperature in celsius:\n");
	scanf("%f",&c);
	
	f=9/5*c+32;
	
	printf("%.2f is the temperature in fahrenheit.",f);
	
	getch();
	return 0;
}
