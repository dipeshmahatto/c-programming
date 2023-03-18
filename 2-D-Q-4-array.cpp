//Write a program to check the given two matrix are identical or not.

#include<stdio.h>
#include<conio.h>

int main(){
	int m1[2][3],m2[2][3],i,j,f=0;
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
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(m1[i][j]!=m2[i][j]){
				f=1;
				break;
			}
		}
	}
	
	if (f==1){
		printf("Identical");
	} else{
		printf("Not identical");
	}
	
}
