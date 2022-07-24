// 4. Write a program to calculate HCF of two numbers
#include <stdio.h>
int main()
{
    int a, b, i;
    printf("enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    for (i = a > b ? b : a; i >= 2; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("HCF of %d and %d = %d", a, b, i);
            break;
        }
    }
    if (i == 1)
    {
        printf("HCF of %d and %d = 1", a, b);
    }
    return 0;
}