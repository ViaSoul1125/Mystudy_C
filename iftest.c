#include <stdio.h>
int main()
{
    char s;
    s=getchar();
    if (s >= 'a' && s <= 'z')
    {
        printf("%c",s-32);
    }
    else
    {
        printf("%c",s+32);
    }

    return 0;
}