// 5. Write a program to check whether two given numbers are co-prime numbers or not
#include <stdio.h>
int main()
{
    int a, b, i, x;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    x = a > b ? a : b;
    for (i = 2; i < x; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("Not Co-Prime Numbers");
            break;
        }
    }
    if (i == x)
    {
        printf("Co-Prime Numbers");
    }
    return 0;
}