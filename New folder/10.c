//Example of array pointer
#include<stdio.h>
int main ()
{
	int a[5]={50,1,27,40,-5};
	int *p[5],i;
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
		printf("Array of elements are:\n");
		for(i=0;i<5;i++)
		{
			printf("%d\t",*p[i]);
		}
	}
	return 0;
}
