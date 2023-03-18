//program example of & and * operator
#include<stdio.h>
int main(){
	int m=500;
	int* p;
	
	p=&m;
	
	printf("%d\n",m);   //500
	printf("%u\n",&m);   //6487572
	printf("%u\n",p);    //6487572
	printf("%u\n",&p);   //6487568
	printf("%d\n",*p);     //500
	printf("%d\n",*(&m));    //500
    	
	
	return 0;
}
