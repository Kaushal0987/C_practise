/*To take elements in an array and count number of even and odd numbers in an array using pointers*/
#include<stdio.h>
int main()
{
 int arr[] = {2, 5, 7, 8, 6, 4, 52, 15, 68, 98, 17}, i, even=0, odd=0;
 int* p;

 p = arr;

 for(i=0; i<11; i++)
 {
  if((*p+i)%2==0)
  {
   even++;
  }
  else
  {
   odd++;
  }
 }
 
 printf("even: %d\nodd: %d", even, odd);
 
}