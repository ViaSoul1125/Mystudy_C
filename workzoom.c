#include <stdio.h>

int c;
static int C;

int func(int a)
{
    c=40;
    static int A=100;
    A++;
    a=10;
    printf("%d\n",a);
    printf("%d\n",A);
    return a;
}

int main()
{
    c=30;
    int b=20;
    static int B=200;
    func(b);
    printf("%d\n",b);
    printf("%d\n",c);
    func(B);
    printf("%d\n",B);
    printf("%d\n",C);
}