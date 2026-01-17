#include <stdio.h>

int main()
{
    int sum = 0;
    unsigned int num = 0;
    scanf("%d", &num);
loop:
    sum += num % 10;
    num /= 10;
    if (num != 0)
    {
        goto loop;
    }
    printf("%d", sum);
}