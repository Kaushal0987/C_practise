/*To find multiplication of matrix*/
#include<stdio.h>
int main()
{
 int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, b[3][3] = {{5,4,8},{6,4,3},{1,4,3}}, c[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
 int i, j, k;

 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
  {
   for(k=0; k<3; k++)
   {
    c[i][j] += a[i][k] * b[k][j];
   }
  }
 }

 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
  {
   printf("%d\t", c[i][j]);
  }
  printf("\n");
 }
}