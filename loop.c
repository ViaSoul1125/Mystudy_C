#include <stdio.h>

int main()
{
    int i=5;
    for(i=5; i<10; ++i)
    {
        printf("Hello, World!\n");
        printf("%d\n", i);
        break;
    }
    printf("%d\n", i);
    // int i = 0;
    // while (1)
    // {

    //     i++;
    //     printf("%d\n", i);
    //     if (i == 10)
    //     {
    //         printf("Hello, World!\n");
    //         break;
    //     }
    // }
}