/*To take n number in an array and display them in ascending order*/
#include<stdio.h>
int main()
{
 int arr[] = {5,3,7,6,1,2}, i, j, temp;

 for(i=0; i<6; i++)
 {
  for(j=i+1; j<6; j++)
  {
   if(arr[i] > arr[j])
   {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
   }
  }
 }

 for(i=0; i<6; i++)
 {
  printf("%d\t",arr[i]);
 }

 return 0;
}