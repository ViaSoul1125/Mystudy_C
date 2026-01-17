// 4. 从键盘输入一个一维整型数组，判断这个数组是否是升序数组
//    eg: 输入： -2 0 1 2 7 9
//    ?       输出：为升序数组
//    ```
// #include <stdio.h>
// #define MAX_SIZE 100

// int main()
// {
//     int arr[MAX_SIZE] = {0};
//     printf("请输入数组元素，以回车结束输入：\n");
//     for (int i = 0; i < MAX_SIZE; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (getchar() == '\n')
//         {
//             arr[i + 1] = '\0';
//             break;
//         }
//     }
//     for (int i = 0; i <= MAX_SIZE - 1; i++)
//     {
//         if (arr[i] < arr[i + 1])
//         {
//             if (arr[i + 2] == '\0')
//             {
//                 printf("是升序数组\n");
//                 return 0;
//             }
//         }
//         else
//         {
//             printf("不是升序数组\n");
//             return 0;
//         }
//     }
//     return 0;
// }
//    ```

// 5. 合并两个升序的一维数组
//    eg: 数组1： 1 3 5 7 9
//    ?      数组2： 2 4 6 8
//    ?	 输出： 1 2 3 4 5 6 7 8 9

//    ```
// #include <stdio.h>
// #define MAX_SIZE 128
// int get_num(int arr[])
// {
//     int count = 0;
//     for(int i=0;i<MAX_SIZE;i++)
//     {
//         if(arr[i]=='\0')
//             break;
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     int arr1[MAX_SIZE] = {0};
//     printf("请输入第一个升序数组元素，以回车结束输入：\n");
//     for(int i=0;i<MAX_SIZE;i++)
//     {
//         scanf("%d", &arr1[i]);
//         if(getchar()=='\n')
//         {
//             arr1[i+1]='\0';
//             break;
//         }
//     }
//     int arr1_size = get_num(arr1);

//     int arr2[MAX_SIZE] = {0};
//     printf("请输入第二个升序数组元素，以回车结束输入：\n");
//     for(int i=0;i<MAX_SIZE;i++)
//     {
//         scanf("%d", &arr2[i]);
//         if(getchar()=='\n')
//         {
//             arr2[i+1]='\0';
//             break;
//         }
//     }
//     int arr2_size = get_num(arr2);

//     int merged[arr1_size + arr2_size];
//     int i = 0, j = 0, k = 0;
//     for (k = 0; k < arr1_size + arr2_size; )
//     {
//         if (arr1[i] < arr2[j]&&i<arr1_size&&j<arr2_size)
//         {
//             merged[k] = arr1[i];
//             k++;
//             i++;
//         }
//         else if(arr1[i] >= arr2[j]&&i<arr1_size&&j<arr2_size)
//         {
//             merged[k] = arr2[j];
//             k++;
//             j++;
//         }
//         else if(i==arr1_size&&j<arr2_size)
//         {
//             merged[k]=arr2[j];
//             k++;
//             j++;
//         }
//         else if(j==arr2_size&&i<arr1_size)
//         {
//             merged[k]=arr1[i];
//             k++;
//             i++;
//         }
        
//     }
//     for (k = 0; k < arr1_size + arr2_size; k++)
//     {   printf("%d ", merged[k]);
//         if(merged[k]=='\0')
//             break;
//     }
        
//     return 0;
// }
//    ```

// 6. 自己查找资料了解直接插入排序，完成直接插入排序代码

//    ```
// #include <stdio.h>
// #define MAX_SIZE 64
// int main()
// {
//     int arr[MAX_SIZE] = {0};
//     printf("请输入数组元素，以回车结束输入：\n");
//     for (int i = 0; i < MAX_SIZE; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (getchar() == '\n')
//         {
//             arr[i + 1] = '\0';
//             break;
//         }
//     }
//     int n = 0;
//     for (n = 0; n < MAX_SIZE; n++)
//     {
//         if (arr[n] == '\0')
//             break;
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }

//     printf("排序后的数组为：\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
//    ```

// 7. 求一个二维数组中的鞍点（改行最大且是该列最小的元素），可能多个或不存在

//    ```
// #include <stdio.h>

// int main()
// {
//     printf("输入行和列的数值：\n");
//     int m,n;
//     scanf("%d %d", &m, &n);
//     int arr[m][n];
//     printf("请输入数组元素，以回车结束输入：\n");
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             scanf("%d", &arr[i][j]);
//             if(getchar()=='\n')
//             {
//                 arr[i][j+1]='\0';
//                 break;
//             }
//         }
//         if(arr[i][0]=='\0')
//             break;
//     }
//     printf("输入的数组为：\n");
//     for (int i = 0; i < m; i++)
//     {
//         printf("\n");
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//     }
//     int flagx=0,flagy=0,exist=0;
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             int temp=arr[i][j];
//             flagx=1;
//             flagy=1;
//             for(int k=0;k<n;k++)
//             {
//                 if(arr[i][k]>temp)
//                 {
//                     flagx=0;
//                     break;
//                 }
//             }
//             for(int l=0;l<m;l++)
//             {
//                 if(arr[l][j]<temp)
//                 {
//                     flagy=0;
//                     break;
//                 }
//             }
//             if(flagx==1&&flagy==1)
//             {
//                 printf("\n鞍点为：%d，位置为：(%d,%d)\n", temp, i, j);
//                 exist = 1;
//             }        
//         }
//     }
//     if(!exist)
//     {
//         printf("不存在鞍点\n");
//     }
// }
//    ```

// 8. 输入一个整数，打印杨辉三角的前n行，n由键盘输入

//    ```
//    输入： 5
//    输出：
//    	  1
//    	  1	1
//    	  1	2 1
//    	  1 3 3 1
//    	  1 4 6 4 1
//    ```
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("请输入杨辉三角的行数：\n");
//     scanf("%d", &n);
//     int arr[n][n];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             if(j==0||j==i)
//             {
//                 arr[i][j]=1;
//             }
//             else
//             {
//                 arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
//             }
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
// }