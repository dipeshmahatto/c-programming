
// 18 W.A.P to check the whether a person is eligible to vote or not based on input age  using ternary opertor !!!

#include<stdio.h>
#include<conio.h>

int main(){
	int a;
	printf("enter the value of a: \n");
	scanf("%d",&a);
	
	(a>=18)?printf("Eligible"):printf("Not-Eligible");
	
	getch ();
	return 0;
}

