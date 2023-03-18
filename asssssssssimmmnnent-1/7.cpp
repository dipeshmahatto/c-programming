// 7. Write a program to illustrate conversion specification.

#include <stdio.h> 

int main() {
  int n=32;
  float f=7.67;
  char ch='a';
  char str1[]="ABCD";
  
  printf("%d\n", n);
    printf("%.2f\n", f);
      printf("%c\n", ch);
  printf("%s", str1);

  return 0;    
}
