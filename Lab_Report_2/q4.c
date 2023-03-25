/*To remove all vowels from a string*/
#include<stdio.h>
#include<string.h>
int main()
{
 char str[30], temp; 
 int i, len, j;
/*Taking a string input from user*/
 printf("Enter a string : ");
 gets(str);

/*strlen() to get the length of the string*/
 len = strlen(str);

/*Using FOR loop and IF case to check for vowel*/
 for(i=0; i<len; i++)
 {
  if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||       str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
  {
   /*Deleting the vowel*/
   for(j=i; j<len; j++)
   {
    str[j] = str[j+1];
   }
   len--;
   i--;
  }
 }

 printf("string without vowels : %s", str);
}