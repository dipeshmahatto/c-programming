// malloc()

#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, i;
	printf("Enter the value of n : \n");
	scanf("%d", &n);
	
	int *p = (int *) malloc (n*sizeof(int));
	
	if(p == NULL) {
		printf("Memory cannot be allocated.");
	}
	
	else {
		printf("Enter the element: ");
		
		for(i=0; i<n; i++) {
			
			scanf("%d", (p+i));
		}
		
		printf("Array elements are: \n");
		for(i=0; i<n; i++) {
			printf("%d\t", *(p+i));
		}
	}
}
