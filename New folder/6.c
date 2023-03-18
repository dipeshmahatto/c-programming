#include <stdio.h>

int length(char s[]);
void main()
{
    char s[]="kathmandu";
   	int l;
   	l=length(s);
    printf("Length of the string: %d", l);
   
}
int length(char s[])
{
    int count = 0,i;
    for (i = 0; s[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}
