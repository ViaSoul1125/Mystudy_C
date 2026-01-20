#include <stdio.h>
#include <string.h>

int main()
{
    
    // typedef struct {
    //     char name[20];
    //     int age;
    // } Person;

    // Person people[3] = {
    //     {"Alice", 30},
    //     {"Bob", 25},
    //     {"Charlie", 35}
    // };


    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };  

    int *p_arr=&arr[0][0];//&arr[0][0] == arr
    *p_arr=100;// arr[0][0]=100
    p_arr+=1;
    *p_arr=200;// arr[0][1]=200

    int (*p)[4]=arr;// arr == &arr[0]
    
    
    printf("%d\n", arr[0][0]);

    printf("%p\n", arr);
    printf("%p\n", arr[0]);

    printf("%d\n", *arr[0]);

    printf("%d\n", *(arr[0]+1));// arr[0][1]
    printf("%d\n", arr[0][1]);

    
    printf("%d\n", *(arr[0]+4));// arr[1][0]

    printf("%d\n", *arr[1]);// arr[1][0]
    printf("%d\n", *arr[2]);// arr[2][0]
    return 0;

}