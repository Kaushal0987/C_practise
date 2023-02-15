/*To compare 2 strings using pointer*/
#include<stdio.h>
int main()
{
 char str1[30], str2[30];
 int i;
 char* p1;
 char* p2;

 printf("Enter first string: ");
 gets(str1);

 printf("Enter second string: ");
 gets(str2);

 p1 = &str1[30];
 p2 = &str2[30];

 if(str1[0]>str2[0])
 {
  printf("%s is alphabetically first", *p1);
 }
 else if(str1[0]<str2[0])
 {
  printf("%s is alphabetically first", *p2);
 }
 else
 {
  printf("Both strings are equal");
 }
}