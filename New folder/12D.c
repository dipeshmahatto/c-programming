// free()

#include<stdio.h>
#include<stdlib.h>

int main() {
	int *p = (int *) malloc (4*sizeof(int ));
	printf("Memory is successfully allocated.");
	free(p);
	printf("Now memory is free.");
}
