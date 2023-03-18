//WAP to read 10 elements form the user and display them using an array !!!

#include<stdio.h>
#include<conio.h>

int main(){
	int m[10];
	int i;
	for(i=0;i<=9;i++){
		scanf("%d",&m[i]);
	}
	
	printf("your input array is:\n");
	
	for(i=0;i<=9;i++){
		printf("%d\n",m[i]);
	}
	
	getch();
	return 0;
}
