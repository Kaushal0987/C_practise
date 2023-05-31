#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
struct quizGame;
{
 int sn;
 char q[100],a[100],b[100],c[100],d[100],ans[100];
};

int main()
{
 int choice, score = 0;
 FILE* fp;
 struct quizGame qz;
 char ch, in;

 fp = fopen("quizGame.txt", "rb");
 if(fp==NULL)
 {
  printf("Error satrting the quiz\nplease restart the game\n");
 }
 else
 {
  do
  {
   printf("************************Welcome to thequiz*************************************\n\n");
   printf("...................press > 1 to start the quiz\n");
   printf("                          2 to check high score\n");
   printf("                          3 to exit the game\n");
   printf("                           Enter your choice : ");
   scanf("%d", &choice);

   switch(choice)
   {
    case 1:
    printf("%d\t%s\n\t%s\t\t%s\n\t%s\t\t%s\n", qz.sn, qz.q, qz.a, qz.b, qz.c, qz.d);
    printf("Enter your answer: ");
    scanf("%c", &in);

    if(strcmp(qz.in,qz.ans)==0)
    {
     printf("Correct answer");
     score++;
    }
    else
    {
     printf("Wrong answer");
     printf("The correct answer is %s",qz.ans);
    }

    printf("if you want to continue the quiz press 'y' or 'Y'");
    scanf("%c", &ch);
   }

  } while (ch=='y'||ch=='Y');
  
 }
}
