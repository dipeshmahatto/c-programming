// Write a program to find the sum and avarage of an n element of an array input by user.

#include<stdio.h>
#include<conio.h>

int main(){
	int n,i,sum=0,avg;
	printf("Enter the number of element:\n");
	scanf("%d",&n);
	
	int x[n];
	
	printf("Enter the elements:\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		sum = sum + x[i];
	}
	
	avg=sum/n;
	printf("sum = %d \n Average = %d",sum,avg);
	
	getch();
	return 0;
}
