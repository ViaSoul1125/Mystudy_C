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

    int a[4]={1,2,3,4};

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };  

    int *p_arr=&arr[0][0];
    *p_arr=100;// arr[0][0]=100
    p_arr+=1;
    *p_arr=200;// arr[0][1]=200
    printf("%d\n", arr[0][0]);
    printf("%d\n", arr[0][1]);
    printf("%d\n", arr[1][0]);

    printf("%d\n", a[2]);
    printf("%d\n", *(a+2));

    printf("%p\n", &a[0]);
    printf("%p\n", arr[0]);

    printf("%d\n", *arr[0]);
    printf("%d\n", *(arr[0]+1));
    printf("%d\n", arr[0][2]);//a[2]

    printf("%d\n", *(arr[0]+4));// arr[1][0]

    printf("%d\n", *arr[1]);
    printf("%d\n", *arr[2]);
    return 0;

}