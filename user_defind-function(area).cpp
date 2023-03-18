// WAp to find the area of circle user function

#include<stdio.h>
#include<conio.h>
void area(void);
void main(){
	area();
}
void area(void){
	float r;
	printf("Enter the radius:\n");
	scanf("%f",&r);\
	printf("Area of circle : %f",(3.14*r*r));
}
