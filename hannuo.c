#include <stdio.h>


void Hannuota(int n,int from,int to,int aux)
{
    if(n==1) // 递归终止条件：只有1个盘子，直接移动
    {
        printf("将盘子 1 从柱子 %d 移动到柱子 %d\n",from,to);
    }
    else
    {
        // 步骤1：n-1个盘子从from移到aux（to作为辅助）
        Hannuota(n-1,from,aux,to);
        // 步骤2：第n个盘子从from移到to
        printf("将盘子 %d 从柱子 %d 移动到柱子 %d\n", n, from, to);  
        // 步骤3：n-1个盘子从aux移到to（from作为辅助）
        Hannuota(n-1,aux,to,from);
    }
}
 
int main()
{
    int n;
    printf("请输入汉诺塔的盘子数量：\n");
    scanf("%d", &n);  
    // 边界校验：盘子数量必须为正整数
    if(n < 1)
    {
        printf("错误：盘子数量必须是正整数！\n");
        return 1;
    }
    printf("\n汉诺塔移动步骤（柱子编号：1=起始柱，2=辅助柱，3=目标柱）：\n");
    Hannuota(n, 1, 3, 2); 
    return 0;

}