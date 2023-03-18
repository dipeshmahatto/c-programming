// porgram to check the input matrix is identity or not.

#include<stdio.h>
#include<conio.h>

int main(){
	int a[2][2],i,j,check=0;
	printf("Enter the elements of matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i==j && a[i][j]!=1){
				check=1;
				break;
			}
			if(i!=j && a[i][j]!=0){
				check=1;
				break;
			}
		}
	}
	if(check==1){
		printf("Not identity matrix");
	} else{
		printf("Identity matrix");
	}
	
	getch();
	return 0;
	
}
