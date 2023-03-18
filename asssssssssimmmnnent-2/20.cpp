// WAP to find the transpose of given input matrix.

#include<stdio.h>
#include<conio.h>

int main(){
	int i , j, n,m;
	printf("Enter the number of rows:\n");
	scanf("%d",&n);
	printf("Enter the number of column:\n");
	scanf("%d",&m);
	
	int a[n][m];
	printf("Enter the element of matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
