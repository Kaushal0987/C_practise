#include<stdio.h>
struct std
{
 int id;
 char name[50];
 long int telno;
};

int main()
{
 FILE *fp;
 struct std s;
 char ch;

 fp = fopen("std.txt","ab");
 if(fp==NULL)
 {
  printf("Error opening file");
 }
 else
 {
  do
  {
   printf("Enter ID: ");
   fflush(stdin);
   scanf("%d",&s.id);
   printf("Enter name: ");
   fflush(stdin);
   scanf("%s",s.name);
   printf("Enter tellephone no: ");
   fflush(stdin);
   scanf("%ld",&s.telno);

   fwrite(&s, sizeof(s),1,fp);
   printf("1 record recorded in file.\n");

   printf("Do you want to add another record?(y/n): ");
   fflush(stdin);
   scanf("%c",&ch);
  }
  while(ch=='y'||ch=='Y');
 }
 fclose(fp);
}