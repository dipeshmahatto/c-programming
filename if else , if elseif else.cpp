#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c;
	printf("Enter the value of a & b & c: ");
	scanf("%d%d%d",&a,&b,&c);
	
/* this is the example of if else  */
	
//	if(a >= 10){
//		printf("%d is geater than 10",a);
//	}else{
//		printf("%d id smaller than 10",a);
//	}


/* this is the example of if else if else if else  */
//	if(a>b){
//		if(a>c){
//			printf("%d is the greater number",a);
//		}else{
//			printf("%d is the greater number",c);
//		}
//	}else{
//		if(b>c){
//			printf("%d is the greater number",b);
//		}else{
//			printf("%d is the greater number",c);
//		}
//	}

/* this is the example of if elseif elseif else */

	if(a>b){
		printf("%d is the greater number",a);
	} else if(b>c){
		printf("%d is the greater number",b);
	}else{
		printf("%d is the greater number",c);
	}

	getch();
	return 0;
}
