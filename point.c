// #include <stdio.h>
// #include <stdlib.h>

// // void func(int *p)
// // {
// //     *p=10;
// // }


// int main()
// {
//     // int arr[5]={1,2,3,4,5};
//     // int *p=arr;
//     // for(int i=0;i<=4;i++)
//     // {
//     //     printf("arr[i] out%d\n",arr[i]);
//     // }
//     // for(int i=0;i<=4;i++)
//     // {
//     //     printf("*(p+i) out%d\n",*(p+i));
//     // }

//     // int a=10;
//     // int *p =&a;
//     // int *q=p;
//     // printf("%p",p);
//     // printf("%p",q);


//     // int a[5] = {1, 3, 5, 7, 9};
// 	// int *p = a;
// 	// int *r = &a[0];
// 	// int *k = &a[2];
// 	// printf("*r=%d\n", *r);
// 	// printf("*(r+1)=%d\n", *(r+1));
// 	// printf("*(r+2)=%d\n", *(r+2));
// 	// printf("*a+2=%d\n", *a+2);
// 	// printf("*a=%d\n", *a);
// 	// printf("k[2]=%d\n", k[2]);
// 	// printf("*(p+2)+2=%d\n", *(p+2)+2);
// 	// printf("k-p=%d\n", k-p);
// 	// //printf("k+p=%d\n", k+p);

//     // int a[5] = {1, 3, 5, 7, 9};
//     // int *p =a;
//     // p[1]=300;
//     // printf("%d",a[1]);
    
//     return 0;
// }


#include <stdio.h>

int * func(int arr[])
{
    int *p=arr;
    p++;
    return p;
}

int main()
{
    char *p="abcdef";
    printf("%c",*(p+2));
    p+=2;
    *p='Z';//修改字符串常量内容，未定义行为
    printf("%c\n",*p);
}
