
// W.A.P to find the largest number among three input number usinf Nested ternary opertor !!!

#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c,l;
	printf("enter the value of a, b & c:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	l=(a>b)?((a>c)?a:c):((b>c)?b:c);
	
	printf("%d is the largest number ",l);
	
	getch ();
	return 0;
}

