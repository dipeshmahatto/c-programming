// calloc()

#include<stdio.h>
#include<conio.h>

int main() {
	int n, i, sum=0;
	
	printf("Enter the value of n : \n");
	scanf("%d", &n);
	
	int *p = (int *) calloc (n, sizeof(int));
	
	if(p == NULL) {
		printf("Memory cannot allocate");
	}
	
	else {
		printf("Enter elements: ");
		for(i=0; i<n; i++) {
			scanf("%d", (p+i));
			sum = sum + (*(p+i));
		}
		
		printf("Sum = %d", sum);
	}
}
