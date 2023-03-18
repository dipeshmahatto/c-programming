//WAP to find the factorial of given positive integer using recursive method ...

#include<stdio.h>

int fact(int);
int main(){
	int f,n;
	printf("Enter a  number:\n");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial= %d",f);
	
}
int fact(int n){
	if(n==1)
	return 1;
	else
	return (n*fact(n-1));
}
