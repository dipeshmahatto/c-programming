#include<stdio.h>
#include<conio.h>

int main(){
	int i,j,k;
	for(i=0;i<5;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(k=5;k>i;k--){
			if(k%2==0){
				printf("0");
			} else{
				printf("1");
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}
