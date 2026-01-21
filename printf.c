//程序无输出,printf是一个行缓冲函数，输出内容先写入到缓冲区中，什么时候同步终端 
//1）遇到\n
//2）缓冲区已满（4096字节）
//3）程序正常结束

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