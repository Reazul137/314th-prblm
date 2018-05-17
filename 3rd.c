#include<stdio.h>
int main()
{
    int num;
    char ch;

    printf("\n ENter an int and a char value : ");

    if(scanf("%d %c",&num,&ch)==2)
        printf("Data read successfully");
    else
        printf("Error in data input");

    return 0;
}
