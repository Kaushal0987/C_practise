/*To reverse a string*/
#include<stdio.h>
#include<string.h>
int main()
{
 char rev[50], str[50];
 int i, len, temp;
/*Taking a string input from user*/
 printf("Enter a string: ");
 scanf("%s", str);
/*using strlen() to get the length of the string*/
 len = strlen(str);

 for(i=0; i<len; i++)
 {
/*Storing the reverse of the original string into annother array*/
  rev[len-i-1] = str[i];
 }
/*Pring the reversed string*/ 
 printf("The string in reverse :%s", rev);
}