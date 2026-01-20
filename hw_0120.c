#include <stdio.h>

// 1. 写一个递归函数，求n的阶乘

// int factorial(int n)
// {
//     if(n==0||n==1)
//     {
//         return 1;
//     }
//     return factorial(n-1)*n;
// }

// int main()
// {
//     int n;
//     printf("请输入一个整数：");
//     scanf("%d",&n);
//     int result = factorial(n);
//     printf("%d的阶乘是：%d\n",n,result);
//     return 0;
// }

// 2. 写一个递归函数，求一维数组中元素最大值


// int max_in_array(int arr[],int size)
// {
//     if(size==1)
//     {
//         return arr[0];
//     }
//     int max=max_in_array(arr,size-1);
//     return (arr[size-1]>max)?arr[size-1]:max;
// }

// int main()
// {
//     int n;
//     printf("请输入数组的大小：");
//     scanf("%d",&n);
//     int arr[n];
//     printf("请输入数组的元素：");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int max_value=max_in_array(arr,n);
//     printf("数组中的最大值是：%d\n",max_value);
//     return 0;
// }

// 3. 写一个递归函数，求斐波那契数列的第n个元素的值

// int fibonacci(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
//         return 1;
//     }
//     if(n==2)
//     {
//         return 1;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);
// }

// int main()
// {
//     int n;
//     printf("请输入一个整数：");
//     scanf("%d",&n);
//     int result=fibonacci(n);
//     printf("斐波那契数列的第%d个元素是：%d\n",n,result);
//     return 0;
// }

// 4. 小明家前面有一个坪，但是这个坪不平整，下雨后，会形成“水洼”，一个点的“水洼”，可以和周围（上下左右四个方向）的其他“水洼”连成一个大水洼，若1代表此处有水，0代表没有水，求水洼的个数

//    ```
//    eg: 
//    	1 1 0 0 0 
//    	1 1 0 1 1
//    	1 1 1 1 1 
//    	0 0 1 0 1
//    	0 0 0 0 0 
//    	1 1 0 1 1
   	
//        输出水洼个数： 3
//    ```

//思路
//遍历数组，遇到1时，水洼数量加1，并调用递归函数将与该点相连的所有1变为0，表示已访问过，避免重复计数。

int ROWS;
int COLS;

void dfs(int grid[ROWS][COLS], int i, int j)
{
    if (i < 0 || i >= ROWS || j < 0 || j >= COLS || grid[i][j] == 0)
    {
        return;
    }
    grid[i][j] = 0; // 标记为已访问
    dfs(grid, i + 1, j); // 下
    dfs(grid, i - 1, j); // 上
    dfs(grid, i, j + 1); // 右
    dfs(grid, i, j - 1); // 左
}
int countPuddles(int grid[ROWS][COLS])
{
    int count = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (grid[i][j] == 1)
            {
                count++;
                dfs(grid, i, j);
            }
        }
    }
    return count;
}

int main()
{
    printf("请输入坪的行数和列数：");
    scanf("%d %d", &ROWS, &COLS);
    int grid[ROWS][COLS];
    printf("请输入坪的状态（0表示无水，1表示有水）：\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }
    int puddleCount = countPuddles(grid);
    printf("水洼个数：%d\n", puddleCount);
    return 0;
}


   