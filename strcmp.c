#include <stdio.h>

int my_strcmp(const char *str1, const char *str2)
{
    while(*str1 && *str2 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int my_strncmp(const char *str1, const char *str2, int n)
{
    if(n<=0)return n;
    while(*str1 && *str2 && (*str1 == *str2)&&n>1)
    {
        str1++;
        str2++;
        n--;
    }
    return *str1 - *str2;
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello1234";
    
    
    printf("%d\n", my_strcmp(str1, str2));
    printf("%d\n", my_strncmp(str1, str2,4));
    

    return 0;
}