// 10. Write a program to find the largest number between two input numbers.

#include<stdio.h>
#include<conio.h>

int main(){
	
	float a,b;
	printf("Enter the value of A & B :\n");
	scanf("%f%f",&a,&b);
	
	if(a>b){
		printf("%.2f is the largest number.",a);
	}else{
		printf("%.2f is the largest number",b);
	}
	
	getch();
	return 0;
}
