/* Write a program to read the size of matrix form the user and also read the elements 
of matrix form the user and display them in matrix format (or proper format)..  */

#include<stdio.h>
#include<conio.h>
#include<math.h>

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
	printf("Your entered matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
