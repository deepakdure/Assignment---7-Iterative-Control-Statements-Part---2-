// 6. Write a program to print all Prime numbers under 100
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j < 50; j++)
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