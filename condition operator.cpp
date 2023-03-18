
// W.A.P to check the result of stduents based on input marks (pass>=40)  !!!

#include<stdio.h>
#include<conio.h>

	int main(){
		int mark;
		printf("Enter your mark :\n");
		scanf("%d",&mark);
		
		(mark>=40)?printf("Pass"):printf("Fail");
		
		getch();
		return 0;
		
	}
