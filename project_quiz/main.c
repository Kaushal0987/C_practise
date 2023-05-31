#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
struct quizGame
{
 int sn;
 char q[100],a[100],b[100],c[100],d[100],ans[100];
};

int main()
{
 FILE *fp;
 struct quizGame qz;
 char ch;

 fp = fopen("quizGame.txt", "ab");
 if(fp==NULL)
 {
  printf("Error opening question");
 }
 else
 {
  do
  {
   printf("Enter question no: ");
   fflush(stdin);
   scanf("%d", &qz.sn);

   printf("Enter the question: ");
   fflush(stdin);
   scanf("%s", qz.q);

   printf("Enter the Answer: ");
   fflush(stdin);
   scanf("%s",qz.ans);

   printf("Enter the four options: ");
   fflush(stdin);
   scanf("%s\n%s\n%s\n%s", qz.a, qz.b, qz.c, qz.d);
   fwrite(&qz, sizeof(qz),1,fp);

   printf("1 question added");
   printf("Do you want to add another question?(Y/N): ");
   fflush(stdin);
   scanf("%c", &ch);

  } while (ch=='y'||ch=='Y');
 }
 fclose(fp);
}