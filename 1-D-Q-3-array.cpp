// WAP to enter an age of n employes and count the total number of employes whose age is greater than 20 and less than 40 using array !!

#include<stdio.h>
#include<conio.h>

int main(){
	int i,n,age,count=0;
	printf("Enter number of employes:\n");
	scanf("%d",&n);
	int emp[n];
	printf("Enter your age:\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&emp[i]);
	}
	
	for(i=0;i<n;i++){
		if(emp[i]>20 && emp[i]<40){
			count++;
		}
	}
	
	printf("Total number of employee whose age is greater than 20 and less than 40 is %d",count);

	getch();
	return 0 ;
}
