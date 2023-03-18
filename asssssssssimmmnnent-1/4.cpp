// 4. Write a program to find the Simple Interest.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	float p,t,r;
	printf("Enter Principal:\n");
	scanf("%f",&p);
	
	printf("Enter Time:\n");
	scanf("%f",&t);
	
	printf("Enter Rate:\n");
	scanf("%f",&r);
	
	printf("Simple interst = %f",(p*t*r)/100);
	
	getch();
	return 0;
	}
