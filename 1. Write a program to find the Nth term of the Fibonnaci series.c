// 1. Write a program to find the Nth term of the Fibonnaci series
#include <stdio.h>
int main()
{
    int n, x = -1, y = 1, z, t;
    printf("enter a number\n");
    scanf("%d", &n);
    t = n;
    while (t)
    {
        z = x + y;
        x = y;
        y = z;
        t--;
    }
    printf("fibonacci series of %d = %d", n, z);
    return 0;
}