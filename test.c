#include <stdio.h>

int main()
{
    int i, j;
    printf("input i:");
    scanf("%d", &i);
    getchar();
    printf("input j:");
    scanf("%d", &j);
    getchar();
    if (i > j)
    {
        printf("%d", i - j);
    }
    if (j > i)
    {
        printf("%d", j - i);
    }

    return 0;
}