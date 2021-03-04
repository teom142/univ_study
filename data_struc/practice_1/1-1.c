#include <stdio.h>

int main(void)
{
    int i, sum;

    sum = 0;
    i = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
}