// WAP to display fiborracci series with n terms using recursive method

#include<stdio.h>
#include<conio.h>
int fibo(int);
int main(){
	int f,i,n;
	printf("Enter the number of terms:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		f=fibo(i);
		printf("%d\n",f);
	}
	
	return 0;
}

int fibo(int n){
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else 
	return(fibo(n-1)+fibo(n-2));
}
