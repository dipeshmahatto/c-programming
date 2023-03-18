// WAP to find the largest element form an array list.

#include<stdio.h>
#include<conio.h>

int main(){
	int a[10],i,large;
	printf("Enter an array element:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	large=a[0];
	
	for(i=0;i<10;i++){
		if(large<a[i]){
			large=a[i];
		}
	}
	printf("Largest number = %d",large);
	
	getch();
	return 0;
}
