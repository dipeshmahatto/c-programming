// 20. W.A.P to display any day form a week using switch case statement !!!

#include<stdio.h>
#include<conio.h>

int main(){
	char ch;
	printf("A for Addition :\n");
	printf("D for Subtract :\n");
	printf("P for Product :\n");
	printf("Q for Quationtaint :\n");
	printf("R for Remainder :\n\n");
	
	printf("Enter your choice:\n");
	scanf("%c",&ch);
	
	int m,n;
	printf("Enter any two number:\n");
	scanf("%d%d",&m,&n);
	
	switch(ch){
		case 'A':
			printf("Addition = %d",m+n);
			break;
		case 'D':
			printf("Subtract = %d",m-n);
			break;
		case 'P':
			printf("Product = %d",m*n);
			break;
		case 'Q':
			printf("Quationtaint = %d",m/n);
			break;
		case 'R':
			printf("Remainder = %d",m%n);
			break;
		default:
				printf("Wrong input");
	}
	
	getch ();
	return 0;
}
