#include <stdio.h>
#include <string.h>

int main()
{

    
    // int a[4][4]={
    //     {1,4,3,2},
    //     {8,6,5,7},
    //     {3,7,2,5},
    //     {4,8,6,1}
    // };
    // int i, j, k, t;
    // for(i=0;i<4;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         for(k=j+1;k<4;k++)
    //         {
    //             if(a[j][i]>a[k][i])//
    //             {
    //                 t=a[j][i];
    //                 a[j][i]=a[k][i];
    //                 a[k][i]=t;
    //             }
    //         }
    //     }
    // }
    // for(i=0;i<4;i++)
    // {
    //     for(j=0;j<4;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }


    // char a[]={'a','b','c','d','e'};//没有\0
    // char b[10]={'a','b','c','d','e'};//未声明部分自动补\0
    // char c[]="abcde";//自动在末尾添加\0
    // printf("%d\n",strlen(a));//strlen遇到\0停止计数，所以这里结果不确定
    // printf("%d\n",strlen(b));
    // printf("%d\n",strlen(c));
    // printf("%d\n",sizeof(a));
    // printf("%d\n",sizeof(b));
    // printf("%d\n",sizeof(c));

    // char str1[]={'\064'};
    // char str2[]="\0";
    // printf("%d %d\n",strlen(str1),strlen(str2));
    // printf("%d %d\n",sizeof(str1),sizeof(str2));

    // char str[]="hello world";//有\0
    // char str1[]={"hello world"};//有\0
    // printf("%d %d\n",strlen(str),strlen(str1));
    // printf("%d %d\n",sizeof(str),sizeof(str1));
    // printf("%s %s\n",str,str1);
    //str和str1完全相同

    float a=100;
    float * p = &a;
    printf("%d\n",*p);
    printf("%d\n",a);
    printf("%f\n",*p);
    printf("%f\n",a);
    printf("%d\n",sizeof(int *));
    


    return 0;
}