#include<stdio.h>
int main(){
	int x=500;
	int *p,**p2,***p3;
	p=&x;
	p2=&p;
	p3=&p2;
	
	printf("%d",***p3);
	
	return 0; //500
}
