/*To reverse a string*/
#include<stdio.h>
#include<string.h>
int main()
{
 char rev[50], str[50];
 int i, len, temp;

 printf("Enter a string to reverse: ");
 scanf("%s", str);
 len = strlen(str);

 for(i=0; i<len; i++)
 {
  rev[len-i-1] = str[i];
 }

 printf("The string in reverse :%s", rev);
}