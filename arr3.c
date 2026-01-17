#include <stdio.h>
#include <string.h>

int main()
{

    int arr[3][4];


    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);

    int sum = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            sum += arr[i][j];

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\nSum=%d\n", sum);

    
    // int *p_arr = &arr[0][0];
    // for (int i = 0; i < 12; i++)
    // {
    //     scanf("%d", p_arr + i);
    // }

    // int sum = 0;
    // for (int i = 0; i < 12; i++)
    // {
    //     sum += *(p_arr + i);
    // }
    // printf("\nSum=%d\n", sum);

    return 0;
}