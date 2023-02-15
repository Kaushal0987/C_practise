/*To print the sum and average of all elements of an array*/
#include<stdio.h>
int main()
{
 int arr[] = {1,2,3,4}, i, sum=0;
 float avg;

 for (i=0; i<4 ; i++)
 {
  sum = sum + arr[i];
 }
 avg = sum / 4;

 printf("sum of all elements of array = %d", sum);
 printf("\naverage = %.2f", avg);

 return 0;
}