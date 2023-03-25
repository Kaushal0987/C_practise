/*To compare 2 strings using pointer*/
#include<stdio.h>
#include<string.h>
int main()
{
 char str1[50], str2[50];

 char *pstr1 = str1;
 char *pstr2 = str2;

 printf("Enter first string: ");
 gets(pstr1);
 fflush(stdin);

 printf("Enter second string: ");
 gets(pstr2);

 if(*pstr1>*pstr2)
 {
  printf("%s is greater then %s", str1, str2);
 }
 else if(*pstr1<*pstr2)
 {
  printf("%s is greater then %s", str2, str1);
 }
 else
 {
  printf("Both strings are equal");
 }
}