// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     // int a[4][4]={
//     //     {1,4,3,2},
//     //     {8,6,5,7},
//     //     {3,7,2,5},
//     //     {4,8,6,1}
//     // };
//     // int i, j, k, t;
//     // for(i=0;i<4;i++)
//     // {
//     //     for(j=0;j<3;j++)
//     //     {
//     //         for(k=j+1;k<4;k++)
//     //         {
//     //             if(a[j][i]>a[k][i])//
//     //             {
//     //                 t=a[j][i];
//     //                 a[j][i]=a[k][i];
//     //                 a[k][i]=t;
//     //             }
//     //         }
//     //     }
//     // }
//     // for(i=0;i<4;i++)
//     // {
//     //     for(j=0;j<4;j++)
//     //     {
//     //         printf("%d ",a[i][j]);
//     //     }
//     //     printf("\n");
//     // }

//     // char a[]={'a','b','c','d','e'};//没有\0
//     // char b[10]={'a','b','c','d','e'};//未声明部分自动补\0
//     // char c[]="abcde";//自动在末尾添加\0
//     // printf("%d\n",strlen(a));//strlen遇到\0停止计数，所以这里结果不确定
//     // printf("%d\n",strlen(b));
//     // printf("%d\n",strlen(c));
//     // printf("%d\n",sizeof(a));
//     // printf("%d\n",sizeof(b));
//     // printf("%d\n",sizeof(c));

//     // char str1[]={'\064'};
//     // char str2[]="\0";
//     // printf("%d %d\n",strlen(str1),strlen(str2));
//     // printf("%d %d\n",sizeof(str1),sizeof(str2));

//     // char str[]="hello world";//有\0
//     // char str1[]={"hello world"};//有\0
//     // printf("%d %d\n",strlen(str),strlen(str1));
//     // printf("%d %d\n",sizeof(str),sizeof(str1));
//     // printf("%s %s\n",str,str1);
//     //str和str1完全相同

//     float a=100;
//     float * p = &a;
//     printf("%d\n",*p);
//     printf("%d\n",a);
//     printf("%f\n",*p);
//     printf("%f\n",a);
//     printf("%d\n",sizeof(int *));

//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct test
{
    int a;
    char *b;
};


int main()
{
    printf("%d\n",sizeof(struct test));
    // //    int *arr={1,2,3,4,5};//错误，不能用大括号初始化指针变量
    //     int arr1[]={1,2,3,4,5};//正确，定义并初始化整型数组
    // //    int *p[]={{1,2},{3,4}};//错误，不能用大括号初始化指针数组
    //     int *p1[]={ (int[]){1,2}, (int[]){3,4} };//正确，定义并初始化指针数组，指向匿名数组
    //     int (*p2)[2]={ (int[]){1,2}, (int[]){3,4} };//正确，定义并初始化指向数组的指针，指向匿名数组
    //     int (*p3)[2][2]={ (int[][2]){ {1,2}, {3,4} }, (int[][2]){ {5,6}, {7,8} } };//正确，定义并初始化指向二维数组的指针，指向匿名二维数组
    //     int arr[][2]={{1,2},{3,4}};//正确，定义并初始化二维数组
    //     //构造二级指针
    //     int (*pp)[2]=arr;
    //     //解引用二级指针，访问元素
    //     *(*pp)=10;
    //     printf("%d\n",*(*pp));

    //     int *j=arr[0];
    //     printf("%d\n",*j);

    // //    int ***r=&arr;//错误，&arr的类型是int (*)[2][2]，不能赋值给int ***类型的指针
    // //  int **rr=&j;//正确，&j的类型是int **，可以赋值给int **类型的指针
    //     int (*ppp)[][2]=&arr;//正确，&arr的类型是int (*)[2][2]，可以赋值给int (*)[][2]类型的指针
    //     printf("%d\n",***ppp);

    //     arr[0][0]=1;
    //     printf("%d\n",arr[0][0]);
    //     return 0;

    // char *arr[] = {"hello", "world", "114514", "123"};
    // char *p = &arr[0][0]; //&arr[0][0]==arr[0]//arr[0]退化为指向首字符的指针，类型是char*
    // printf("%c\n", *(p + 7));
    // char **pp = arr; // arr==&arr[0]//arr退化为指向首元素的指针，类型是char**
    // printf("%c\n", *(*(pp + 1) + 2));
    // char ***ppp = &pp; //&pp的类型是char***，指向char**类型的指针，不发生退化
    // printf("%c\n", *(*(*(ppp + 0) + 2) + 2));
    // arr[0] = "nihao";
    // p=&arr[0][0];
    // printf("%s\n", *pp);
    // printf("%s\n", arr[0]);
    // for(int i=0;i<10;i++)
    // {
    //     printf("%c", *(p + i));
    // }
    // printf("\n");
    // arr[0] = "NIHAOSHIJIE";//修改arr[0]的值，使其指向另一个字符串常量
    // printf("%c\n",*p);
    // printf("%s\n", *pp);
    // printf("%s\n", arr[0]);
    // for(int i=0;i<5;i++)
    // {
    //     printf("%c", *(p + i));
    // }
    // printf("\n");
    // printf("%s\n", *(pp + 1));
    // p=arr[0];
    // printf("%c\n", *(p + 0));//为什么二级指针pp不需要pp=&arr[0]

    // // arr[1][2]='R';//不可以，修改常量字符串内容会导致未定义行为
    // // printf("%s\n",arr[1]);
    // //*(*(pp+1)+2)='R';//不可以
    // // printf("%s\n",arr[1]);
    // char *str = "HELLONIHAO"; // str是指向字符串常量的指针，字符串常量存储在只读区，不能修改
    // str = "NIHAO"; // 可以，str指向另一个字符串常量
    // printf("%s\n", str);

    // int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    // printf("%d\n",*arr[0]);
}