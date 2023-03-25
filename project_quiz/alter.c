#include<stdio.h>
struct General_Knowledge
{
 int ngk;
 char qgk[100],o1[100],o2[100],o3[100],o4[100];
}
struct Science
{
 int ns;
 char qs[100],o1[100],o2[100],o3[100],o4[100];
}
struct Geography
{
 int ng;
 char qg[100],o1[100],o2[100],o3[100],o4[100];
}
struct Technology
{
 int nt;
 char qt[100],o1[100],o2[100],o3[100],o4[100];
}
struct History
{
 int nh;
 char qh[100],o1[100],o2[100],o3[100],o4[100];
}

main()
{
 int i, choice;
 FILE *fp;
 struct General_Knowledge gk;
 struct Science s;
 struct Geography g;
 struct technology t;
 struct History h;
 char ch;

 printf("Select a Subject");
 printf("Press 1 for General Knowledge");
 printf("Press 2 for Science");
 printf("Press 3 for Geography");
 printf("Press 4 for Technology");
 printf("Press 5 for History");
 printf("Press 6 to exit the program");
 scanf("%d",&choice);

 switch (choice)
 {
  case 1:
  fp = fopen("General_Knowledge.txt", "ab");
  if(fp=NULL)
  {
   printf("Error optaining question");
  }
  else
  {
   do
   {
    printf("Enter question no: ");
    fflush(stdin)
    scanf("%d", &s.ngk);
    printf("Enter the question: ");
    fflush(stdin)
    gets(s.qgk);
    printf("Enter the Answer: ");
    fflush(stdin)
    scanf("%d",s.o1);
    printf("Enter the three other options: ");
    fflush(stdin)
    scanf("%s\n%s\n%s", s.o2,s.o3,s.o4);
    fwrite(&gk, sizeof(gk),1,fp);
    printf("1 question added");
    printf("Do you want to add another question?(Y/N): ");
    fflush(stdin);
    scanf("%c", &ch);
   } while (ch=='y'||ch=='Y');
  }
  fclose(fp);
  break;

  case 2:
  fp = fopen("Science.txt", "ab");
  if(fp=NULL)
  {
   printf("Error optaining question");
  }
  else
  {
   do
   {
    printf("Enter question no: ");
    fflush(stdin)
    scanf("%d", &s.ns);
    printf("Enter the question: ");
    fflush(stdin)
    gets(s.qs);
    printf("Enter the Answer: ");
    fflush(stdin)
    scanf("%d",s.o1);
    printf("Enter the three other options: ");
    fflush(stdin)
    scanf("%s\n%s\n%s", s.o2,s.o3,s.o4);
    fwrite(&s, sizeof(s),1,fp);
    printf("1 question added");
    printf("Do you want to add another question?(Y/N): ");
    fflush(stdin);
    scanf("%c", &ch);
   } while (ch=='y'||ch=='Y');
  }
  fclose(fp);
  break;

  case 3:
  fp = fopen("Geography.txt", "ab");
  if(fp=NULL)
  {
   printf("Error optaining question");
  }
  else
  {
   do
   {
    printf("Enter question no: ");
    fflush(stdin)
    scanf("%d", &s.ng);
    printf("Enter the question: ");
    fflush(stdin)
    gets(s.qg);
    printf("Enter the Answer: ");
    fflush(stdin)
    scanf("%d",s.o1);
    printf("Enter the three other options: ");
    fflush(stdin)
    scanf("%s\n%s\n%s", s.o2,s.o3,s.o4);
    fwrite(&g, sizeof(g),1,fp);
    printf("1 question added");
    printf("Do you want to add another question?(Y/N): ");
    fflush(stdin);
    scanf("%c", &ch);
   } while (ch=='y'||ch=='Y');
  }
  fclose(fp);
  break;

  case 4:
  fp = fopen("Technology.txt", "ab");
  if(fp=NULL)
  {
   printf("Error optaining question");
  }
  else
  {
   do
   {
    printf("Enter question no: ");
    fflush(stdin)
    scanf("%d", &s.nt);
    printf("Enter the question: ");
    fflush(stdin)
    gets(s.qt);
    printf("Enter the Answer: ");
    fflush(stdin)
    scanf("%d",s.o1);
    printf("Enter the three other options: ");
    fflush(stdin)
    scanf("%s\n%s\n%s", s.o2,s.o3,s.o4);
    fwrite(&t, sizeof(t),1,fp);
    printf("1 question added");
    printf("Do you want to add another question?(Y/N): ");
    fflush(stdin);
    scanf("%c", &ch);
   } while (ch=='y'||ch=='Y');
  }
  fclose(fp);
  break;

  case 5:
  fp = fopen("History.txt", "ab");
  if(fp=NULL)
  {
   printf("Error optaining question");
  }
  else
  {
   do
   {
    printf("Enter question no: ");
    fflush(stdin)
    scanf("%d", &s.nh);
    printf("Enter the question: ");
    fflush(stdin)
    gets(s.qh);
    printf("Enter the Answer: ");
    fflush(stdin)
    scanf("%d",s.o1);
    printf("Enter the three other options: ");
    fflush(stdin)
    scanf("%s\n%s\n%s", s.o2,s.o3,s.o4);
    fwrite(&h, sizeof(h),1,fp);
    printf("1 question added");
    printf("Do you want to add another question?(Y/N): ");
    fflush(stdin);
    scanf("%c", &ch);
   } while (ch=='y'||ch=='Y');
  }
  fclose(fp);
  break;

  case 6:
  printf("\nExiting the program");
  break;
  
  default:
  printf("\nWrong input");
  break;
 }
}