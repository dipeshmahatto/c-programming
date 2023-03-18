// WAP to find the reverse of given input string without using libaray function

#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Enter the number of charater:\n");
	scanf("%d",&n);
	char s[n];
	printf("Enter your name:\n");
	scanf("%s",s);
	int i;
	for(i=n;i>=0;i--){
		printf("%c",s[i]);
	}
	
	getch();
	return 0;
	
}
