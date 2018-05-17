#include<stdio.h>
int main()
{
    int a, b, large;

    printf("Enter the value of a and b : ");
    scanf("%d%d", &a, &b);

    if(a>b)
        large=a;
    else
        large=b;

    printf("Large = %d",large);

    return 0;
}
