/*To count total number of words in a string*/
#include<stdio.h>
int main()
{
 char ch[30];
 int i, count=1;

 printf("enter a string = ");
 gets(ch);

 for(i=0; ch[i] != '\0'; i++)
 {
  if (ch[i] == ' ')
  {
   count++;
  }
 }

 printf("Number of words in the string are : %d", count);
}