/*To take elements in an array and count number of even and odd numbers in an array using pointers*/
#include<stdio.h>
int main()
{
 int arr[] = {2, 5, 7, 8, 6, 4, 52, 15, 68, 98, 17}, i, even=0, odd=0;
 int* p1;
 int* p2;

 for(i=0; i<11; i++)
 {
  if(arr[i]%2==0)
  {
   even++;
  }
  else
  {
   odd++;
  }
 }

 p1 = &even;
 p2 = &odd;
 
 printf("even : %d\nodd: %d", *p1, *p2);
 
}