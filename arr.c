#include <stdio.h>
#include <string.h>

// int main()
// {

//     // char arr[5] ={'a','b','c','d','e'};
//     // printf("%p\n", &arr[0]);//arr==&arr[0]
//     // printf("%c\n", *(&arr[1]+1));//arr[2]==arr[1+1]==*(&arr[1]+1)
//     // printf("%c\n", *(arr+3));//arr[3]==*(arr+3)
//     // printf("%c\n", arr[4]);//arr[4]
//     // printf("%d\n", arr[5]);//arr[5] is out of bounds, undefined behavior
//     // printf("%d\n", sizeof(arr));//5

//     // char str[]="hello";
//     // // char str1[10]="aaaaaaa";
//     // scanf("%s", str);
//     // printf("%s\n", str);
//     // printf("%d\n", sizeof(str));
//     // printf("%d\n", strlen(str));
//     // printf("%c\n", *(str+1));
//     // // printf("%s\n", str1);
//     // return 0;

//     // fgets();
//     // char arr1[6]="hello";
//     // for (int i =5; i >=0; i--)
//     // {
//     //     printf("%c", arr1[i]);
//     // }

//     // char arr[2][6]={"hello", "world"};
//     // printf("%s\n", arr[0]);
    
    
//     //*(a [i]+j) 或 *(*(a+i)+j) 是 a [i][j] 的值。
//     int arr[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}};

//     // 1. 行名arr[i]：一维数组名，退化后是int*（指向行内首元素的元素指针）
//     int *p_col = arr[0]; // arr[0]退化后是int*，指向arr[0][0]
//     printf("p_col指向的元素：%d\n", *p_col); 
//     p_col++;
//     printf("p_col指向的元素：%d\n", *p_col);


//     // 2. 二维数组名arr：退化后是int (*)[4]（指向首行的数组指针）
//     int (*p_row)[4] = arr; // 无需强制转换，类型完全匹配
//     printf("p_row指向的首元素：%d\n", (*p_row)[0]);
//     p_row++;
//     printf("p_row指向的首元素：%d\n", (*p_row)[0]);


//     // 3. &arr：非退化场景，类型是int (*)[3][4]（指向整个二维数组的指针）
//     int (*p_all)[3][4] = &arr;
//     printf("&arr指向的首元素：%d\n", (*p_all)[0][0]); 

//     return 0;
// }

    // int arr[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}};

    // // 1. 行名arr[i]：一维数组名，退化后是int*（指向行内首元素的元素指针）
    // int *p_col = arr[0]; // arr[0]退化后是int*，指向arr[0][0]
    // printf("p_col指向的元素的地址：%p\n", p_col); 
    // printf("p_col指向的元素的值：%d\n", *p_col);
    // p_col++;
    // printf("p_col指向的元素的地址：%p\n", p_col); 
    // printf("p_col指向的元素的值：%d\n", *p_col);


    // // 2. 二维数组名arr：退化后是int (*)[4]（指向首行的数组指针）
    // int (*p_row)[4] = arr; // 无需强制转换，类型完全匹配
    // printf("p_row指向的首元素地址：%p\n", p_row);
    // printf("p_row指向的首行首元素的值：%d\n", *(*p_row));
    // p_row++;
    // printf("p_row指向的首元素地址：%p\n", p_row);
    // printf("p_row指向的首行首元素的值：%d\n", *(*p_row));


    // // 3. &arr：非退化场景，类型是int (*)[3][4]（指向整个二维数组的指针）
    // int (*p_all)[3][4] = &arr;
    // printf("p_all指向的首元素地址：%p\n", p_all); 
    // printf("p_all指向的首行首元素的值：%d\n", *(*(*p_all)));
    // p_all++;
    // printf("p_all指向的首元素地址：%p\n", p_all); 
    // printf("p_all指向的首行首元素的值：%d\n", *(*(*p_all)));
    // return 0;


int main()
{
    char *arr[]={"hello","world","114514","1919810"};
    char *p=&arr[0][0];//&arr[0][0]==arr[0]//arr[0]退化为指向首字符的指针，类型是char*
    printf("%c\n",*(p+0));
    printf("%c\n",*(p+1));
    char **pp=arr;//arr==&arr[0]//arr退化为指向首元素的指针，类型是char** 
    printf("%s\n",*pp);
    printf("%s\n",*(pp+1));
    char ***ppp=&pp;//&pp的类型是char***，指向char**类型的指针，不发生退化
    printf("%s\n",**ppp);
    //printf("%s\n",**(ppp+1));//ppp+1越界，未定义行为
    
    return 0;
}

// //数组访问
// int arr_sum(char *arr[],int n)
// {
//     int sum=0;
//     int num=1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=strlen(arr[i])-1;j>=0;j--)
//         {
//             if(arr[i][j]>='0'&&arr[i][j]<='9')
//             {
//                 sum+= (int)(arr[i][j]-'0')*num;
//                 num*=10;
//             }
//             else
//             {
//                 num=1;
//             }
//         }
//     }
//     return sum;
// }

// //指针访问
// int arr_sum1(char *arr[],int n)
// {
//     char **p=arr;
//     char *q=arr[0];
//     int sum=0;
//     int num=1;
//     for(int i=0;i<n;i++)
//     {
//         q=*p;

//         for(int j=strlen(q)-1;j>=0;j--)
//         {
//             if(*(q+j)>='0'&&*(q+j)<='9')
//             {
//                 sum+= (int)(*(q+j)-'0')*num;
//                 num*=10;
//             }
//             else
//             {
//                 num=1;
//             }
//         }
//         p++;
//     }
//     return sum;
// }

// int main()
// {
//     char *arr[]={"he110","w0r1d","fa114asd","asd514asd"};//110+0+1+114+514=739
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int sum=arr_sum(arr,n);
//     printf("sum=%d\n",sum);
//     printf("%d", arr_sum1(arr, n));
    
//     return 0;
// }