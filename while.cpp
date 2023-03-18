// W.A.P to display "World cup final" 5 times using while loop

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	
//	int i = 0;
//	while(i<=5){
//		printf("World cup final \n");
//		i++;
//	}


/* To print number 1 to 10 using while loop  */

//	int i=1;
//	while(i<=10){
//		printf("%d\n",i);
//		i++;
//	}

/* To print even number(1 to 100) */

//	int x=1;
//	while(x<=100){
//		if(x%2==0){
//			printf("%d\t",x);
//		}
//		x++;
//	}

/* Find the total sum of odd number(1 to 100) */

//	int i=1,sum=0;
//	while(i<=100){
//		if(i%2!=0){
//			sum=sum + i;
//		}
//		i++;
//	}
//		printf("Sum = %d",sum);

/* WAP to count total number of digits in the given input numbers */

//	int n,count=0;
//	printf("Enter your numbers");
//	scanf("%d",&n);
//	
//	while(n>0){
//		n=n/10;
//		count++;
//	}
//	printf("%d",count);

/* WAP to find the total sum of individual digit in the given input number  */

//	int n, sum=0,r;
//	printf("Enter your number:\n");
//	scanf("%d",&n);
//	while(n>0)
//	{
//		r=n%10;
//		sum = sum + r;
//		n=n/10;
//	}
//	printf("Total sum = %d",sum);
//	
		
/* WAP to reverse your given input number */

//	int n,r,rev;
//	printf("Enter your number:\n");
//	scanf("%d",&n);
//	
//	while(n>0){
//		r=n%10;
//		rev= (rev*10)+r;
//		n= n/10;
//	}
//	printf("%d",rev);

/* WAP to check the given input number is armstrong or not */

	int n,count=0,r,arm=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	int m=n;
	int temp=n;
	while(n>0){
		n=n/10;
		count++;
	}
	while(m>0){
		r=m%10;
		arm=arm+ pow(r,count);
		m=m/10;
	}
	if(temp==arm){
		printf("Armstorng");
	} else{
		printf("Not armstrong");
	}

	getch();
	return 0;
}
