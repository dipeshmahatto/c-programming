#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,j,n,temp=0;
	printf("Enter the total number of array:\n");
	scanf("%d",&n);
	
	printf("Enter the elements of an array:\n");
	int x[n];
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	
	// ascending order 
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(x[j]>x[j+1]){
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	
	// Desecending order
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(x[j+1]>x[j]){
//				temp=x[j];
//				x[j]=x[j+1];
//				x[j+1]=temp;
//			}
//		}
//	}
	
	printf("Ascending order:\n");
	for(i=0;i<n;i++){
		printf("%d\t",x[i]);
	}

//printf("Descending order:\n");
//	for(i=0;i<n;i++){
//		printf("%d\t",x[i]);
//	}
	
	
	
	
	
	
//	int i,n,position, m;
//	printf("Enter the value of total number of array:\n");
//	scanf("%d",&n);
//	
//	int x[n];
//	printf("Enter the array elements:\n");
//	for(i=0;i<n;i++){
//		scanf("%d",&x[i]);
//	} 
//	
//	printf("Enter the number to be searched:\n");
//	scanf("%d",&m);
//	
//	for(i=0;i<n;i++){
//		if(m==x[i]){
//			position=position +1;
//			break
//		}
//	}
//	
//	if(position>0){
//		printf("%d is in the postion:%d",m,position);
//	}
//	else {
//		printf("%d is not presented in array.",m)
//	}
//	
	
	
	
	
	getch();
	return 0;
}
