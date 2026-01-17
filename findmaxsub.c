//kadane算法： 一个全局最大值，一个一当前元素作为结尾的所有连续子数组的最大值  O(n)
#include <stdio.h>

int main()
{
    int n;
    printf("请输入数组元素的个数:");
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max_sum = a[0];  //保存的最终求解的所有子数组和中最大的值
    int cur_sum = a[0]; //保存以当前元素结尾的所有子数组中的最大的值
    
    for(int i=1; i<n; i++)
    {
        cur_sum = (cur_sum + a[i] > a[i]) ? (cur_sum + a[i]) : a[i];
        
        if(cur_sum > max_sum)
        {
            max_sum = cur_sum;
        }
    }

    printf("%d\n", max_sum);
}