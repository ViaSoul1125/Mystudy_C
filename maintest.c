#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 1;
    printf("%d\n", atoi(argv[i]) + atoi(argv[i + 1]));
    printf("%d\n", atoi(argv[i]) - atoi(argv[i + 1]));
    printf("%d\n", atoi(argv[i]) * atoi(argv[i + 1]));
    printf("%f\n", (float)atoi(argv[i]) / (float)atoi(argv[i + 1]));
    return 0;
}