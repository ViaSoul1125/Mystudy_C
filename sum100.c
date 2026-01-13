#include <stdio.h>

int main()
{
    int sum = 0;
    printf("init_sum=%d", sum);
    for (int i = 0; i <= 100; i++)
    {
        sum += i;
    }
    printf("sum=%d", sum);
    return 0;
}