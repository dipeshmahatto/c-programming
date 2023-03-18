// WAP to check the input string is Palindam or not.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	int n;
	printf("Enter the number of charater:\n");
	scanf("%d",&n);
	char s[n],rev[n];
	printf("Enter your name:\n");
	scanf("%s",s);
	rev=(strrev(s));
	if(s==rev){
		printf("true");
	}
	else {
		printf("false");
	}
	getch();
	return 0;
	
}
