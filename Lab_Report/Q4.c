/*Program to Check Character Is Uppercase, Lowercase Alphabet or a Digit or a Special Symbol*/
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);
 
    if(ch >= 65 && ch <= 90)
    {
        printf ("character is in uppercase");
    }
    else if(ch >= 97 && ch <= 122)
    {    
        printf ("character is in lowercase");
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf ("character is a number");
    }
    else
    {
        printf ("character is special symbol");
    }
 
    return 0;
}