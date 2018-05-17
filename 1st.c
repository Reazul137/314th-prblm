#include<stdio.h>
#include<conio.h>
int main()
{
    int age;

    printf("Enter you age : ");
    scanf("%d",&age);

    if(age>=18)
        printf("You are eligible for vote, happy voting :) ");
    else
        printf("You are not eligible for vote!!, better for next time :) ");
    return 0;
}
