// bubble sort

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int n,i,j,temp;
	printf("Enter total no.of element:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[i]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Elements in ascending order:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
