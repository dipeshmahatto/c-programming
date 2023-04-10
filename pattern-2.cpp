#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k;
	for(i=5;i>0;i--){
		for(j=5;j>i;j--){
			printf(" ");
		}
		for(k=i;k>0;k--){
			printf("%d",k);
		}
		printf("\n");
	}
	getch ();
	return 0;
}
