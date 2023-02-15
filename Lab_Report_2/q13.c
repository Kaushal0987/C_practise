/*To check if the string is palindrome or not*/
#include<stdio.h>
#include<string.h>
int main()
{
 int i, len, cmp=0;
 char str[50], stri[50];

 printf("Enter a string: ");
 scanf("%s", str);
 
 len = strlen(str);

 for(i=0; i<len; i++)
 {
  stri[len-i-1] = str[i];
 }

 for(i=0; i<len; i++)
 {
  if(str[i]==stri[i])
  {
   cmp++;
  }
 }

 if(cmp==len)
 {
  printf("%s is palindrome", stri);
 }
 else
 {
  printf("%s is not palindrome", stri);
 }
}