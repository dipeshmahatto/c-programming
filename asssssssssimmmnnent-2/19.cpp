//Write a program to find the sum of two matrix.

#include<stdio.h>
#include<conio.h>

int main(){
	int m1[2][3],m2[2][3],sum[2][3],i,j;
	printf("Enter the element are first matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter the element are second matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m2[i][j]);
		}
	}
	printf("Results: ");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			
			sum[i][j]=m1[i][j]+m2[i][j];
			printf("%d\t",sum[i][j]);
			
			}
		}
	}
