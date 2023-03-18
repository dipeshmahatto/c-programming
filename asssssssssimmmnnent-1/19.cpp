// 19. W.A.P to find the smallest number among three input number using ternary opertor !!!

#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c,l;
	printf("Enter the value of a, b & c:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	l=(a<b)?((a<c)?a:c):((b<c)?b:c);
	
	printf("%d is the smallest number ",l);
	
	getch ();
	return 0;
}

