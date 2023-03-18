// WAP to find the frequency of each element form an array list.

#include<stdio.h>
#include<conio.h>

int main(){
	int a[10],b[10],i,j,count;
	printf("Enter an array element:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++){
		count=1;
		if(a[i]!=-1){
			for(j=i+1;j<10;j++);
		}
		if(a[i]==a[j]){
			count++;
			a[j]=-1;
		}
	}
	b[j]=count;
	
	for(i=0;i<10;i++){
		if(a[i]!=-1){
			printf("%d occurs %d times",a[i],b[i]);
		}
	}
	
	getch();
	return 0;
	
}
