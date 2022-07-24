// 9. Write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
#include <math.h>
int main()
{
    int n, x = 0, s, t, z = 0, u;
    printf("enter a number\n");
    scanf("%d", &u);
    n = s = u;
    while (n)
    {
        n = n / 10;
        x++;
    }
    while (s)
    {
        t = s % 10;
        z = z + pow(t, x);
        s = s / 10;
    }
    if (z == u)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}