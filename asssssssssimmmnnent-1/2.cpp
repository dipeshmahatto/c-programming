// 2. Write a program to read and display integer value, floating value, character and string.

#include<stdio.h>
#include<conio.h>

int main(){
	int a;
	float f;
	char c;
	char s[10];
	
	printf("Enter a character :\n");
	scanf("%c",&c);
	
	printf("Enter a interger value :\n");
	scanf("%d",&a);
	
	printf("Enter a float value :\n");
	scanf("%f",&f);
	
	printf("Enter a string :\n");
	scanf("%s",&s);
	
	printf("\n");
	
	printf("%d\n",a);
	printf("%f\n",f);
	printf("%c\n",c);
	printf("%s\n",s);
	
	
	getch();
	return 0;
}
