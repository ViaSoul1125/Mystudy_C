#include <stdio.h>
#include "func.h"

extern void func()
{
    printf("This is func from func.c\n");
}

extern void func1(char *str)
{
    printf("%s\n", str);
}