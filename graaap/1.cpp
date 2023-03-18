#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	circle(100,100,50);
	
	getch();
	closegraph();
	return 0;
}
