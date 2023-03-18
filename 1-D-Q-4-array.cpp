// WAP to check the given input number is present in an array list or not !!!

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int n,i,position=0,m;
	
	printf("Enter your total number of array:\n");
	scanf("%d",&n);
	
	int x[n];
	printf("Enter your array element:\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	
	printf("Enter a number to be searched:\n");
	scanf("%d",&m);
	
	for(i=0;i<10;i++){
		if(m==x[i]){
			position=i+1;
			break;
		}	
	}
	
	if(position>0){
		printf("%d is present at %d position",m,position);
	} else {
		printf("%d is not present in this array",m);
	}
	
	getch();
	return 0;
}
