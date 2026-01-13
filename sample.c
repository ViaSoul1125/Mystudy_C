#include <stdio.h>

int main ()
{
    float x=3.2,y=4.5;
    int a = 17;
    a=x+(int)(x+y)%9/(double)2*(a%3);
    printf("%d\n",a);

    return 0;
}