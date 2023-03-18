// 8. Write a program to find the ASCII value of input character.

#include <stdio.h>  
#include<conio.h>
int main()  
{  
    char ch;    // variable declaration  
    printf("Enter a character :\n");  
    scanf("%c",&ch);  // user input 
	 
    printf("\n The ASCII value of %c is : %d", ch,ch);  
    
    getch();
    return 0;  
}  
