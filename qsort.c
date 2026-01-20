// #include <stdio.h>
// #include <stdlib.h>
// // 比较函数：整型升序
// int compare_int_asc(const void *a, const void *b) {
//     const int *pa = (const int *)a; // 将void*转换为int*
//     const int *pb = (const int *)b;
//     return *pa - *pb; // 升序：a-b
// }
// // 比较函数：整型降序
// int compare_int_desc(const void *a, const void *b) {
//     const int *pa = (const int *)a;
//     const int *pb = (const int *)b;
//     return *pb - *pa; // 降序：b-a
// }

// int main() {
//     int arr[] = {42, 13, 7, 99, -5, 0, 66};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     qsort(arr, n, sizeof(int), compare_int_asc);
//     printf("compare_int_asc\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     // 改为降序排序
//     qsort(arr, n, sizeof(int), compare_int_desc);
//     printf("compare_int_desc\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

#include <stdio.h>

void quick_sort(int arr[],int left,int right)
{
    int start=left;
    int end=right;
    if(start>=end)return; // 递归终止条件
    //1.选择最左边元素为基准  base_value = a[start];
    int base_value=arr[start];
    //2.动left和right，选择左为基准，先动右边
    while(left < right)
    {
        //先从右往左走，动right
        while(arr[right] >= base_value && left < right)
        {
            right--;
        }
        
        //再从左往右走，动left, 找到比base_value要大的元素
        while(arr[left] <= base_value && left < right)
        {
            left++;
        }
        //交换a[left] 与 a[right];
        if(left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
           
    }
    
    //3.交换基准所在位置元素a[start]与a[left]
    arr[start] = arr[left];
    arr[left] = base_value;
    
    //4.按照同样的快速排序的方法处理左侧及右侧
    quick_sort(arr, start, left-1);
    quick_sort(arr, right+1, end);
}

int main()
{
    int arr[] = {29,10,14,37,13,5,42,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, size-1);
    printf("排序后的数组为：\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}