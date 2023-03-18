// WAP to find the transpose of given input matrix.

#include<stdio.h>
#include<conio.h>

int main(){
	int a[2][3]={{1,2,3},{4,5,6}},i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
