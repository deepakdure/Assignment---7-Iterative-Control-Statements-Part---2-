// 7. Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int main()
{
    int a, b, i, j;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
            printf("%d  ", i);
    }
    return 0;
}