/*Ask user to enter numbers in an array and make menu driven program to do the following:
1. to remove common elements for an array
2. to display an array in decending order
3. to find maximum and minimum elements in an array
4. to exit*/

#include<stdio.h>
int main()
{
 int i, j, choice, num[9], temp;

 printf("Press 1 to remove common elements for an array\nPress 2 to display an array in decending order\nPress 3 to find maximum and minimum elements in an array\nPress 4 to exit: ");
 scanf("%d", &choice);

 switch (choice)
 {
  case 1:
  int len=9, k;
  printf("Enter the numbers in the array: ");
  for(i=0; i<len; i++)
  {
   scanf("%d", &num[i]);
  }
  for(i=0; i<len; i++)
  {
   for(j=i+1; j<len; j++)
   {
    if(num[i] == num[j])
    {
     for(k=j; k<len; k++)
     {
      num[k] = num[k+1];
     }
     j--;
     len--;
    }
   }
  }
  printf("Array without common element: ");
  for(i=0; i<len; i++)
  {
   printf("\t%d",num[i]);
  }
  break;

  case 2:
  printf("Enter the numbers in the array: ");
  for(i=0; i<9; i++)
  {
   scanf("%d", &num[i]);
  }
  for(i=0; i<9; i++)
  {
   for(j=i+1; j<9; j++)
   {
    if(num[i] < num[j])
    {
     temp = num[i];
     num[i] = num[j];
     num[j] = temp;
    }
   }
  }
  for(i=0; i<9; i++)
  {
   printf("%d\t",num[i]);
  }
  break;

  case 3:
  int max, min;
  printf("Enter the numbers in the array: ");
  for(i=0; i<9; i++)
  {
   scanf("%d", &num[i]);
  }
  max = num[0];
  min = num[0];
  for(i=0; i<9; i++)
  {
   if(num[i]>max)
   {
    max = num[i];
   }

   if(num[i]<min)
   {
    min = num[i];
   }
  }
  printf("Maximun element: %d\n", max);
  printf("Minimun element: %d", min);
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