// 21.Write a C program to find area of circle,area of square,area of rectangle and simple interest using switch case statement !!

#include<stdio.h>
#include<conio.h>

int main(){
	char ch;
	printf("C for area of circle :\n");
	printf("S for area of square :\n");
	printf("R for area of rectangle :\n");
	printf("I for Simple interest :\n");
	
	printf("Enter your choice:\n");
	scanf("%c",&ch);
	
	switch(ch){
		case 'C':
			int pi,r;
			printf("Enter the value of radius:\n") ;
			scanf("%d",&r);
			printf("Area of circle = %d",pi*r*r);
			break;
			
		case 'S':
			int l;
			printf("Enter the length:\n");
			scanf("%d",&l);
			printf("Area of square = %d",l*l);
			break;
			
		case 'R':
			int L,b;
			printf("Enter the value of length and breath:\n");
			scanf("%d%d",&L,&b);
			printf("Area of rectangle = %d",L*b);
			break;
			
		case 'I':
			float p,R,t;
			printf("Enter the value of Principal,rate & time:\n");
			scanf("%f%f%f",&p,&R,&t);
			printf("Simple interest = %f",((p*t*R)/100));
			break;
			
		default:
				printf("Wrong input");
	}
	
	getch ();
	return 0;
}
