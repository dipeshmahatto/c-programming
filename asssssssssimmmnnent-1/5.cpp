// 5. Write a program to find the area and circumference of circle.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	float r,pi=3.14;
	
	printf("Enter radius:\n");
	scanf("%f",&r);
	
	printf("Area of circle = %.3f \n",pi*r*r);
	printf("Circumference of cirle = %.3f",2*pi*r);
	
	getch();
	return 0;
}
