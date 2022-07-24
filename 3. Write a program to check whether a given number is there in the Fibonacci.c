// 3. Write a program to check whether a given number is there in the Fibonacci series or not
#include <stdio.h>
int main()
{
    int n, x = -1, y = 1, z, t = 1;
    printf("enter a number\n");
    scanf("%d", &n);
    while (t)
    {
        z = x + y;
        x = y;
        y = z;

        if (z == n)
        {
            printf("%d is included in Fibonacci Series", n);
            break;
        }
        if (z > n)
        {
            printf(" %d is not included in Fibonacci Series", n);
            break;
        }
        t++;
    }
}