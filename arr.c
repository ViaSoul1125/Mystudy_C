#include <stdio.h>
#include <string.h>

int main()
{

    // char arr[5] ={'a','b','c','d','e'};
    // printf("%p\n", &arr[0]);//arr==&arr[0]
    // printf("%c\n", *(&arr[1]+1));//arr[2]==arr[1+1]==*(&arr[1]+1)
    // printf("%c\n", *(arr+3));//arr[3]==*(arr+3)
    // printf("%c\n", arr[4]);//arr[4]
    // printf("%d\n", arr[5]);//arr[5] is out of bounds, undefined behavior
    // printf("%d\n", sizeof(arr));//5

    // char str[]="hello";
    // // char str1[10]="aaaaaaa";
    // scanf("%s", str);
    // printf("%s\n", str);
    // printf("%d\n", sizeof(str));
    // printf("%d\n", strlen(str));
    // printf("%c\n", *(str+1));
    // // printf("%s\n", str1);
    // return 0;

    // fgets();
    // char arr1[6]="hello";
    // for (int i =5; i >=0; i--)
    // {
    //     printf("%c", arr1[i]);
    // }

    // char arr[2][6]={"hello", "world"};
    // printf("%s\n", arr[0]);
    
    
    //*(a [i]+j) 或 *(*(a+i)+j) 是 a [i][j] 的值。
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    // 1. 二维数组名arr：退化后是int (*)[4]（指向首行的数组指针）
    int (*p_row)[4] = arr; // 无需强制转换，类型完全匹配
    printf("p_row指向的首元素：%d\n", (*p_row)[0]);
    p_row++;
    printf("p_row指向的首元素：%d\n", (*p_row)[0]);


    // 2. 行名arr[i]：一维数组名，退化后是int*（指向行内首元素的元素指针）
    int *p_col = arr[0]; // arr[0]退化后是int*，指向arr[0][0]
    printf("p_col指向的元素：%d\n", *p_col); 
    p_col++;
    printf("p_col指向的元素：%d\n", *p_col);


    // 3. &arr：非退化场景，类型是int (*)[3][4]（指向整个二维数组的指针）
    int (*p_all)[3][4] = &arr;
    printf("&arr指向的首元素：%d\n", (*p_all)[0][0]); 

    return 0;
}