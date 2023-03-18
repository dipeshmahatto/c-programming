//call by reference
#include<stdio.h>

int swap(int*, int*);
int main(){
	int x=50, y=100;
	printf("%d\t%d\n",x,y);
     swap(&x,&y);
     printf("%d\t%d\n",x,y);
	return 0;
}
	int swap(int *m,int *n){
		int temp;
		temp=*m;
		*m=*n;
		*n=temp;
	printf("%d\t%d\n",*m,*n);
	}

