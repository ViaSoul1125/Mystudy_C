#include <stdio.h>
#include <string.h>

// void print_n(int n){
//     printf("%d\n", n);
//     if(n == 1) return;
//     print_n(n-1);
// }

// int func(int n){
//     if(n==2)return 3;
//     return 2*func(n-1) + 1;
// }

// int sum_array(int arr [],int size)
// {
//     if (size==0) return 0;
//     return arr[size-1] + sum_array(arr, size-1);
// }

// void dec_to_bin(int n)
// {
//     if (n == 0)
//         return;
//     dec_to_bin(n / 2);
//     printf("%d", n % 2);
// }

// void reverse_num(int n)
// {
//     if (n < 10)
//     {
//         printf("%d", n);
//         return;
//     }
//     printf("%d", n % 10);
//     reverse_num(n / 10);
// }

// int array_is_up(int arr[],int size)
// {
//     if(size==1)return 1;
//     if((arr[size-1] > arr[size-2])&&array_is_up(arr, size-1))return 1;
//     else return 0;
// }


int main()
{
    // int arr[] = {1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int sum = sum_array(arr, size);
    // printf("Sum of array elements: %d\n", sum);

    // int n = 4;
    // int result = func(n);
    // printf("Result: %d\n", result);

    // int n = 951;
    // dec_to_bin(n);

    // int n = 114514;
    // reverse_num(n);

    // int arr[] = {1,2,3,4,10};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // array_is_up(arr, size)?printf("数组是升序的\n"):printf("数组不是升序的\n");

    return 0;
}
