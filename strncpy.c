#include <stdio.h>
#include <string.h>

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return char* 
 */
char * my_strncpy(char *dest, const char *src, size_t n)
{
    int i;
    for(i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    for( ; i < n; i++)
    {
        dest[i] = '\0';
    }
    
    return dest;
}

int main()
{
    char str1[20]="Hello";
    char str2[20]="asdfasdfasdfasdf";

    // 使用自定义的strncpy函数
    my_strncpy(str2, str1, 7);
    
    printf("Source String: %s\n", str1);
    printf("Copied String: %s\n", str2);

    return 0;
}