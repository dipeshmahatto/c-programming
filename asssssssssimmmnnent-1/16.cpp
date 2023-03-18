/* 16. Write a program to find the smallest number among three input numbers using nested if else
statement.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c;
	printf("Enter the value od a,b and c:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b){
		if(a<c){
			printf("%d is the smallest number",a);
		} else {
			printf("%d is the smallest number",c);
		}
	} else {
		if(b<c){
			printf("%d is the smallest number",b);
		} else{
			printf("%d is the smallest number",c);
		}
	}
	
	getch();
	return 0;
}
