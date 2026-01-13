#include <stdio.h>

int main()
{
    int print1 =printf("%d\n", 42);
    int print2 =printf("%.2f\n", 3.14);
    int print3 =printf("%s\n", "Hello, World!");
    int print4 =printf("%c\n", 'A');
    printf("%d, %d, %d, %d\n", print1, print2, print3, print4);
    return 0;
}