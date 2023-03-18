
// W.A.P to find the smallest number between two input number using ternary opertor !!!

#include<stdio.h>
#include<conio.h>

int main(){
	
	int x,y,l;
	printf("Enter the value of x & y:\n");
	scanf("%d%d",&x,&y);
	l=(x<y)?x:y;
	printf("%d is the smallest number",l);
	
	getch();
	return 0;
}

