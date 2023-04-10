// WAP to multiple two matrix with conditions.

#include<stdio.h>
#include<conio.h>

int main(){
	int r1,c1,r2,c2,i,j,k;
	printf("Enter the size of first matrix:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the size of second matrix:\n");
	scanf("%d%d",&r2,&c2);
	
	if(c1!=r2){
		printf("Matrix multipilication is not possible...");
	} else{
		int a[r1][c1],b[r2][c2],m[r1][c2];
		printf("Enter the element are first matrix:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the element are second matrix:\n");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	// multipilication
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			m[i][j]=0;
			for(k=0;k<c1;k++){
				m[i][j]=m[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	
	printf("your reultant matrix is:\n");
	
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}
getch();
	return 0;	
}
