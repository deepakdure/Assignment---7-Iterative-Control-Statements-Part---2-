// 2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int n, x = -1, y = 1, z;
    printf("enter a number\n");
    scanf("%d", &n);
    printf("first %d terms of fibonacci series are = \n", n);
    while (n)
    {
        z = x + y;
        x = y;
        y = z;
        n--;
        printf("%d  ", z);
    }
    return 0;
}
