/*Make a menu driven program for string manipulation without using library functions for the following:
1. to convert a string into uppercase
2. to convert a string into lowercase
3. to find the length of the string
4. to exit*/
#include<stdio.h>
int main()
{
 int i, len=0, choice;
 char str[50];

 printf("Press 1 to convert a string into uppercase\nPress 2 to convert a string into lowercase\nPress 3 to find the length of the string\nPress 4 to exit: ");
 scanf("%d", &choice);

 switch (choice)
 {
 
  case 1:
  printf("Enter a string: ");
  scanf("%s", str);
  for(i=0; str[i] != '\0'; i++)
  {
   if(str[i] >= 97 && str[i] <= 122)
   {
    str[i] = str[i]-32;
   }
  }
  printf("\nString in uppercase: %s", str);
  break;
  

  case 2:
  printf("Enter a string: ");
  scanf("%s", str);
  for(i=0; str[i] != '\0'; i++)
  {
   if(str[i] >= 65 && str[i] <= 90)
   {
    str[i] = str[i]+32;
   }
  }
  printf("\nString in lowercase: %s", str);
  break;
  

  case 3:
  printf("Enter a string: ");
  scanf("%s", str);
  for(i=0; str[i] != '\0'; i++)
  {
   len++;
  }
  printf("\nLength of the string: %d", len);
  break;
  

  case 4:
  printf("\nExiting the program");
  break;
  

  default:
  printf("\nWrong input");
  break;
 }

return 0;
}