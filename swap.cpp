#include<stdio.h>
int main(){
	int a=5,b=8;
	
	a=a^b;
	b=a^b;
	a=a^b;
	
	printf("%d",a);
	printf("%d",b);
}
