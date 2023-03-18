//program to find the largest element of an array using pointer
#include<stdio.h>
int main()
{
	int a[5]={2,3,1,4,5};
	int *p,i,large;
	p=&a[0];
	large= *p;
	for(i=0;i<5;i++)
	{
		if (large <(*(p+i)))
		large= *(p+i);
	}
	printf("Largest element=%d",large);
}
