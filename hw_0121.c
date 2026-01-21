// ## 作业

// 1. 利用指针访问数组各个元素，实现字符串大小写转换（封装函数完成）

// ```
// eg: 输入 abcEFGio   输出ABCefgIO
// ```

// #include <stdio.h>

// void exchange(char* str)
// {
//     char* p = str;
//     while(*p != '\0')
//     {
//         if (*p >= 'A' && *p <= 'Z') {
//             *p += 32;
//             p++;
//             continue;
//         }
//         if (*p >= 'a' && *p <= 'z') {
//             *p -= 32;
//             p++;
//             continue;
//         }
//     }
// }

// int main()
// {
//     char str[] = "HeLlOwOrLd";
//     exchange(str);
//     puts(str);
// }


// 2. 分析如下程序的输出结果 （假设机器64bits）

// ```C
// int a[] = {1, 2, 3, 4};

// printf("%ld\n", sizeof(a));
// //整个数组，4个int，4*4=16
// printf("%ld\n", sizeof(a + 0));
// //地址，输出为8

// printf("%ld\n", sizeof(*a));
// //相当于*a[0]，sizeof(int)==4
// printf("%ld\n", sizeof(a + 1));
// //地址，a[1]，输出为8
// printf("%ld\n", sizeof(&a));
// //地址，a[0]，输出为8

// printf("%ld\n", sizeof(*&a));
// //相当a，输出为16
// printf("%ld\n", sizeof(&a[0]));
// //地址，a[0]，输出为8
// ```

// 3. 删除字符串的子串，只需要删除一次即可, 若需要访问数组元素，请以指针方式访问，尽量封装函数完成

// ```
// eg: 输入 Tomcat is a male cat
//     输出 Tom is a male cat
// ```
// #include <stdio.h>
// #include <string.h>

// void del_str(char* str,  char* substr)
// {
//     char* p = str;
//     char* q = substr;
//     char* start = NULL;
//     char* end = NULL;

//     while (*p != '\0')
//     {
//         start = p;
//         q = substr;

//         while (*p == *q && *q != '\0')
//         {
//             p++;
//             q++;
//         }

//         if (*q == '\0') // 找到子串
//         {
//             end = p;
//             while (*end != '\0')
//             {
//                 *start++ = *end++;
//             }
//             *start = '\0';
//             return; // 只删除一次
//         }
//         else
//         {
//             p = start + 1; // 继续查找
//         }
//     }
// }

// int main()
// {
//     char str[] = "Tomcat is a male cat";
//     char* substr = "cat";
//     puts(str);
//     del_str(str, substr);
//     puts(str);
// }



// 4. 字符串单词反转（保持单词内部顺序）

// ```
// eg: 输入 hello world program
//     输出 program world hello
// ```

//寻找第一个空格，使空格前的字符串反转

// #include <stdio.h>

// void reverse(char* str)
// {
//     char* p = str;//p找空格
//     char* q = p;//q找开头
//     char* r = p;//r找尾巴
//     while(*p!='\0')
//     {
//         while (*p != ' ')
//         {
//             if (*p == '\0')
//                 break;
//             p++;
//             r++; 
//         }
//         p++;
//         r--;
//         for (; q <= r; q++, r--)
//         {
//             char temp = *q;
//             *q = *r;
//             *r = temp;
//         }
//         r = p;
//         q = p;
//     }
     
// }

// int main()
// {
//     char str[] = "hello world program";
//     puts(str);
//     reverse(str);
//     puts(str);
// }

// 5. 有时间自己可以完成指针试卷上能做的题目