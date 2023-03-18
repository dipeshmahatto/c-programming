// realloc()

#include<stdio.h>
#include<stdlib.h>

int main() {
	int i;
	int *p = (int *) malloc (2 * sizeof(int));
	
	if(p == NULL) {
		printf("Memory cannot allocate");
	}
	
	else {
		printf("Enter element : ");
		for(i=0; i<2; i++) {
			scanf("%d", (p+i));
		}
		p = (int *) realloc (p, 4*sizeof(int));
		if(p == NULL) {
			printf("Memory not available.");
		} 
		
		else {
			printf("Enter elements: ");
			for(i=2; i<4; i++) {
				scanf("%d", (p+i));
			}
			printf("All elements : \n");
			for(i=0; i<4; i++) {
				printf("%d\t", *(p+i));
			}
		}
	}
}
