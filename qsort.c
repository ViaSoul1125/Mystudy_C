#include <stdio.h>
#include <stdlib.h>
// 比较函数：整型升序
int compare_int_asc(const void *a, const void *b) {
    const int *pa = (const int *)a; // 将void*转换为int*
    const int *pb = (const int *)b;
    return *pa - *pb; // 升序：a-b
}
// 比较函数：整型降序
int compare_int_desc(const void *a, const void *b) {
    const int *pa = (const int *)a;
    const int *pb = (const int *)b;
    return *pb - *pa; // 降序：b-a
}

int main() {
    int arr[] = {42, 13, 7, 99, -5, 0, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, n, sizeof(int), compare_int_asc);
    printf("compare_int_asc\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // 改为降序排序
    qsort(arr, n, sizeof(int), compare_int_desc);
    printf("compare_int_desc\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}