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

 fp = fopen("std.txt", "rb");
 if(fp==NULL)
 {
  printf("Error opening file");
 }
 else
 {
  printf("ID\tName\ttelno\n");
  printf("---------------------------------------------------");
  while(fread(&s,sizeof(s),1,fp)!=0)
  {
   printf("%d\t%s\t%ld\n",s.id,s.name,s.telno);
  }
 }
 fclose(fp);
}