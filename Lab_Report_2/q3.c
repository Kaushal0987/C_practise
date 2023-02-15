/*To take a number and check if the num exists in the array or not*/
#include<stdio.h>
int main()
{
 int arr[] = {1,4,8,7,9,6,3}, i, num, stat = 0;

 printf("Enter a number = ");
 scanf("%d", &num);

 for(i=0; i<7; i++)
 {
  if(num == arr[i])
  {
   stat+= stat + 1;
   break;
  }
 }

 if(stat==1)
 {
  printf("The number %d exists in the array", num);
 } 
 else
 {
  printf("the number %d does not exist in the array", num);
 }

 return 0;
}

