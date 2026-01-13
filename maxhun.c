#include <stdio.h>
#include <stdlib.h>
void arrgetnum(int arr[], unsigned int *num);
int compare_int_asc(const void *a, const void *b) {
    const int *pa = (const int *)a; // 将void*转换为int*
    const int *pb = (const int *)b;
    return *pa - *pb; // 升序：a-b
}

int main()
{
    unsigned int num;
    scanf("%u", &num);
    int arr[32];
    int n = sizeof(arr) / sizeof(arr[0]);
    arrgetnum(arr, &num);
    qsort(arr, n, sizeof(int), compare_int_asc);
    printf("compare_int_asc\n");
    for (int i = 0; i < n; i++) {
        num |= (arr[i] << i);
    }
    printf("%u", num);
    return 0;
}

void arrgetnum(int arr[], unsigned int *num)
{
    for (int i = 0; i < 32; i++) {
        arr[i] = (*num >> i) & 1;
    }
}
