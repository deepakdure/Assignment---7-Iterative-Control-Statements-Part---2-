// 8. Write a program to find next Prime number of a given number
#include <stdio.h>
int main()
{
    int n, i, j, x;
    printf("enter a number\n");
    scanf("%d", &n);
    x = n + 1;
    for (i = x; i < x + i; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            printf("Next prime number is = %d", j);
            break;
        }
    }
    return 0;
}