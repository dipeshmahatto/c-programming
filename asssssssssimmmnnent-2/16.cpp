// WAP to find the largest element form an array list.

#include<stdio.h>
#include<conio.h>

int main(){
	int a[5],i,large;
	printf("Enter an array element:\n");
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	large=a[0];
	
	for(i=0;i<5;i++){
		if(large<a[i]){
			large=a[i];
		}
	}
	printf("Largest number = %d",large);
	
	getch();
	return 0;
}
