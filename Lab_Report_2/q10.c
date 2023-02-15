/* To ask for name and age of 5 students and re-arrange them in descending order of the name*/
#include<stdio.h>
#include<string.h>
int main()
{
 char name[5][30], temp1[30];
 int age[5], i, j, temp2;

 printf("\nEnter the name of 5 students : ");
 for(i=0; i<5; i++)
 {
  scanf("%s", name);
 }
 printf("\nEnter the ages of those 5 students : ");
 for(i=0; i<5; i++)
 {
  scanf("%d", &age[i]);
 }

 for(i=0; i<5; i++)
 {
  for(j=i+1; j<5; j++)
  {
   if(strcmp(name[i],name[j])<0)
   {
    strcpy(temp1,name[i]);
    strcpy(name[i],name[j]);
    strcpy(name[j],temp1);

    temp2 = age[i];
    age[i] = age[j];
    age[j] = temp2;
   }
  }
 }

 printf("The name and age of 5 students re-arranged in descending order of the name :\n");
 for(i=0; i<5; i++)
 {
  printf("%s\t%d\n", name[i], age[i]);
 }
}