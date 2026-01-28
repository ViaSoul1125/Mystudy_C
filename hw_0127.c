// #include <stdio.h>
// #include <string.h>
// 编写一个函数，实现字符串的循环左移
// char* loop_left(char* str, int len, int n)
// {
//     static char temp[100] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         temp[len - n + i] = str[i];
//     }
//     for (int i = n; i < len; i++)
//     {
//         temp[i - n] = str[i];
//     }
//     temp[len] = '\0';
//     str = temp;
//     return str;
// }

// int main()
// {
//     char* str = (char *)"hello world";
//     int len = strlen(str);
//     char* result = loop_left(str, len, 3);
//     printf("%s\n", result);
//     return 0;
// }

// 对字符串进行压缩，编写函数，实现基本字符串的压缩功能，要求返回压缩后的字符串
//  char *func(char *str, int n)
//  {
//      static char temp[100];
//      char *p = str;
//      char *q = str;
//      int i = 0;
//      int count = 0;
//      while (*(q) != '\0')
//      {
//          if (*p == *q)
//          {
//              q++;
//              count++;
//          }
//          else
//          {
//              temp[i++] = *p;
//              temp[i++] = count + '0';
//              p = q;
//              count = 0;
//          }
//      }
//      temp[i++] = *p;
//      temp[i++] = count + '0';
//      temp[i] = '\0';

//     str = temp;
//     return str;
// }

// int main()
// {
//     char *str = (char *)"aaaabbbbbbbbcccdddddd"; // a4b8c3d6
//     int n = strlen(str);
//     str = func(str, n);
//     printf("%s\n", str);
//     return 0;
// }

// 设计一个状态机，判断一个字符串是否为有效的C标识符。
//(标识符，以字母或下划线开头，后续可以跟字母、数字或下划线)
// 开头字符判断--状态0
// 条件：字母或下划线--转状态1
//       '\0'--转状态3(结束状态)
//       其他字符--转状态2(错误状态)
// 后续字符判断--状态1
// 条件：字母、数字或下划线--继续停留状态1
//       '\0'--转状态3(结束状态)
//       其他字符--转状态2(错误状态)
// 错误状态--状态2
// 动作：到达该状态，说明不是有效标识符，返回0
// 结束状态判断--状态3
// 动作：到达该状态，说明是有效标识符，返回1

// typedef enum
// {
//     STATE_START,
//     STATE_CONTINUE,
//     STATE_INVALID,
//     STATE_END
// } State;

// int first_char(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch == '_'))
//     {
//         return STATE_CONTINUE; // 合法
//     }
//     else if (ch == '\0')
//     {
//         return STATE_END; // 结束状态
//     }
//     else
//     {
//         return STATE_INVALID; // 错误状态
//     }
// }

// int is_identifier(char *str)
// {
//     State state = STATE_START;
//     char *p = str;
//     int state = first_char(*p);
//     while (1)
//     {
//         switch (state)
//         {
//         case STATE_CONTINUE:
//             if (*p == '\0')
//             {
//                 state = STATE_END;
//             }
//             else if (((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || (*p == '_')))
//             {
//                 p++;
//                 state = STATE_CONTINUE;
//             }
//             else
//             {
//                 state = STATE_INVALID;
//             }
//             break;
//         case STATE_INVALID:
//             return 0;
//         case STATE_END:
//             return 1;
//         }
//     }
// }

// int main()
// {
//     char string[100];
//     scanf("%s", string);
//     char *str = string;
//     if (is_identifier(str))
//         printf("is valid C identifier\n");
//     else
//         printf("is invalid C identifier\n");
//     return 0;
// }