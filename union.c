#include <stdio.h>

union test
{
    char a;
    int b;
};

int main()
{
    union test a;
    a.b=1;
    printf("%d\n",a.a);
    char *p=&a.a;

    
    printf("%d\n",*p);
    p++;
    printf("%d\n",*p);
    p++;
    printf("%d\n",*p);
    p++;
    printf("%d\n",*p);

}