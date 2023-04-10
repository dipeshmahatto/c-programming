#include<stdio.h>
#include<conio.h>

int main(){
	int i, j;
	for(i=4;i>0;i--){
		for(j=i;j>0;j--){
			printf("%d\t",i);
		}
		printf("\n");
	}
	getch ();
	return 0;
}
