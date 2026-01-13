#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; // p 指向数组 arr 的首元素
    printf("%p\n", p); // 输出数组首元素的地址
    while (1)
    {
        
        char str[10];
   
        printf("Enter a string: ");
        scanf("%s", str);
        //    printf("You entered: %s\n", str);

        printf("%d %d %d\n", str[0], str[1], str[2]);
    }

    char c1, c2;
    printf("Enter two char: ");
    scanf("%c %c", &c1, &c2);
    printf("You entered: %c and %c\n", c1, c2);

    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);

    float fnumber;
    printf("Enter a float: ");
    scanf("%f", &fnumber);
    printf("You entered: %f\n", fnumber);

    return 0;
}