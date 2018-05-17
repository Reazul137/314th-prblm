#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main()
{
    char ch;

    printf("Press any key : ");
    scanf("%c",&ch);

    if(isalpha(ch)>0)
        printf("You entered a character!");
    if(isdigit(ch)>0)
        printf("You entered a digit!");
    if(isprint(ch)>0)
        printf("You entered a printable character!");
    if(ispunct(ch)>0)
        printf("You entered a punctuation mark!");
    if(isspace(ch)>0)
        printf("You entered a white space character!");
    getch();
    return 0;
}
