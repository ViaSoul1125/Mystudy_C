#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 3;
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        printf("OK\n");
        if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
        {
            printf("zhijiao");
        }
        else if (a == b && b == c && a == c)
        {
            printf("dengbian");
        }
        else if (a == b || a == c || b == c)
        {
            printf("dengyao");
        }
        else
        {
            printf("normal");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}