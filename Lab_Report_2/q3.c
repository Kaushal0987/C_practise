/*To take a number and check if the num exists in the array or not*/
#include<stdio.h>
int main()
{
 int arr[] = {1,4,8,7,9,6,3}, i, num, stat = 0;
/*Taking a num input from user*/
 printf("Enter a number = ");
 scanf("%d", &num);

 for(i=0; i<7; i++)
 {
/*using IF case to check the existence of input num in the array*/
  if(num == arr[i])
  {
   stat+= 1;
   break;
  }
 }
/*Printing the result*/
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

