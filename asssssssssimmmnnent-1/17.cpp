/* 17. Write a program to find the largest number among four input numbers using ladder of if else
statement.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c,d;
	printf("Enter the value of a,b,c and d:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b && a>c && a>d){
		printf("%d is the largest number",a);
	} else if(b>a && b>c && b>d){
		printf("%d is the largest number",b);
	} else if(c>a && c>b && c>d){
		printf("%d is the largest number",c);
	} else{
		printf("%d is the largest number",d);
	}
	
	getch();
	return 0;
}
