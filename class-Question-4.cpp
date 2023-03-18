// Write a program to convert seconds into hours,minutes and second !!!

#include<stdio.h>
#include<conio.h>

int main(){
	int sec, h, m, s;
	printf("Please enter seconds :");
	scanf("%d",&sec);
	
//	h = sec/3600 ;
//	
//	m = (sec -(3600*h))/60;
//	
//	s = (sec -(3600*h)-(m*60));
	
	
	h = sec/3600;
	s = s%3600;
	m =s/60;
	s =s%60;
	
	printf("H:M:S => %d:%d:%d",h,m,s);
	getch();
	return 0;
}
