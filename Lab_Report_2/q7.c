/*To take values in a matrix and display sum of the elements of the matrix*/
#include<stdio.h>
int main()
{
 int x[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
 int i, j, sum = 0;
/*Using FOR loop to calculate sum*/
 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
  {
   sum += x[i][j];
  }
 }

 printf("Sum of all elements of a matrix = %d", sum);
}