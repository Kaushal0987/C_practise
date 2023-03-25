/*To count total number of words in a string*/
#include<stdio.h>
int main()
{
 char ch[30];
 int i, count=1;
/*Taking a string input from user*/
 printf("enter a string = ");
 gets(ch);
/*using FOR loop and IF case to count the spaces between the words*/
 for(i=0; ch[i] != '\0'; i++)
 {
  if (ch[i] == ' ')
  {
   count++;
  }
 }

 printf("Number of words in the string are : %d", count);
}