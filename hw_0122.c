#include <stdio.h>
#include <string.h>
// 5. 给出一个字符串s，请找出其中不含有重复字符的最长子串的长度
// ```
// eg：	输入： abcdcd
// 	 输出： 4
// ```

//滑动窗口
// int find_max_variety_substr(char *s)
// {
//     char *start=s;
//     char *p=s;
//     int max_len=0;
//     int cur_len=0;
//     while(*p)
//     {
//         char *q=start;
//         while(q<p)
//         {
//             if(*q==*p)
//             {
//                 if(cur_len>max_len)
//                 {
//                     max_len=cur_len;
//                 }
//                 start=q+1;
//                 cur_len=p - start;
//                 break;
//             }
//             q++;
//         }
//         cur_len++;
//         p++;
//     }
//     if(cur_len>max_len)
//     {
//         max_len=cur_len;
//     }
//     return max_len;
// }

// int main()
// {
//     char str[]="asdasdfghsdfg";
//     printf("%d\n", find_max_variety_substr(str));
//     return 0;
// }

// 6. 给出一个字符串s，找到s中最长的回文子串
// ```
// eg: 输入: abacd
//     输出: aba
//     输入: cdabbaef
//     输出: abba
// ```

char *loop_substr(char *s)
{
    char *start=s;
    int sub_len=0,max_len=0;
    for(;*s;s++)
    {
        char *left=s;
        char *right=s;
        //奇数回文
        while((*right)==(*left))
        {
            left--;
            right++;
        }
        left++;
        right--;
        for(char *p=left;p<=right;p++)sub_len++;
        if(sub_len>max_len)
        {
            max_len=sub_len;
            start=left;
        }
        sub_len=0;
        //偶数回文
        left=s;
        right=s+1;
        while((*right)==(*left))
        {
            left--;
            right++;
        }
        left++;
        right--;
        for(char *p=left;p<=right;p++)sub_len++;
        if(sub_len>max_len)
        {
            max_len=sub_len;
            start=left;
        }
        sub_len=0;
    }
    if(max_len>0)
    {
        printf("The longest loop substring is: ");
        for(int i=0;i<max_len;i++)
        {
            putchar(*(start+i));
        }
        putchar('\n');
        return start;
    }
    return NULL; 
}


int main()
{
    char str[]="abc";
    loop_substr(str);
    return 0;
}