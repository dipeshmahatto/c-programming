// 14. Write a C program to check whether a character is alphabet or not.

#include<stdio.h>
#include<conio.h>

// 14. Write a C program to check whether a character is alphabet or not.

int main(){
	char input;
	printf("Enter your character:\n");
	scanf("%c",&input);
	
	if((input>= 'a' && input<='z') || (input>='A' && input<='Z')){
		printf("Entered character is alphabet");
	} else {
		printf("Entered character is not a alphabet");
	}
	
	getch();
	return 0;
}
