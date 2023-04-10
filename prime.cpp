#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,count=0;
	printf("Enter your number to be checked;\n");
	scanf("%d",&n);
		
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}	
	
	if(count==2){
		printf("prime");
	}else{
		printf("composite");
	}


	getch();
	return 0;
	}
