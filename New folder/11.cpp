//Example of pointer and string

#include<stdio.h>
int main(){
	char s[]="Ram";
	char *p;
	p=s;
	while(*p != '\0')
	{
		printf("%c", *p);
		p++;
	}
	return 0;
}
