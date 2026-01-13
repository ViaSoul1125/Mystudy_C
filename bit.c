#include <stdio.h>

int main ()
{
    int a = -65;
    printf("%d\n",a);
    printf("%u\n",a);
    printf("%c\n",a);

    int b = 65;
    printf("%d\n",b);
    printf("%u\n",b);
    printf("%c\n",b);

    unsigned int c = -65u;
    printf("%d\n",c);
    printf("%u\n",c);
    printf("%c\n",c);

    unsigned int d = 65u;
    printf("%d\n",d);
    printf("%u\n",d);
    printf("%c\n",d);

    char e =-65;
    printf("%d,%c,%u\n",e,e,e);
    /*短-》长*/

    unsigned char f = -5;//-5的二进制补码为11111011，保存到无符号类型时按位不变，转换为十进制时按无符号数计算，值为251
    printf("%d,%u\n",f,f);//251，251

    char aa =251;//251的二进制为11111011
    char bb ;
    unsigned int ac = aa;//251的二进制为11111011，赋值给int类型时按符号扩展，变为32位的11111111 11111111 11111111 11111011，即-5
    printf("%d,%u\n",ac,ac);//-5，4294967291
    bb=aa+8;//251+8=259，259的二进制为00000001 00000011，赋值给char类型时只保留低8位00000011，即3
    printf("%d,%u\n",bb,bb);//3，3
    return 0;
}