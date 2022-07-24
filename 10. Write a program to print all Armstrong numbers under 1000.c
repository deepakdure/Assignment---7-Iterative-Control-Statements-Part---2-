// 10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, n = 1, x, y, z;
    printf("Number of first Armstrong numbers under 1000 is = \n");

    while (n != 1000)
    {
        a = x = n;
        b = 0, z = 0;
        while (a)
        {
            a = a / 10;
            b++;
        }
        while (x)
        {
            y = x % 10;
            z = z + pow(y, b);
            x = x / 10;
        }
        if (z == n)
            printf("%d ", z);
        n++;
    }
}
