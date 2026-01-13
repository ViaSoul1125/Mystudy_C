#include <stdio.h>

int getmax(int a,int b,int c)
{
    int max;
    if(a>=b && a>=c)
    {
        max=a;
    }
    else if(b>=a && b>=c)
    {
        max=b;
    }
    else
    {
        max=c;
    }
    return max;
}

int getmin(int a,int b,int c)
{
    int min;
    if(a<=b && a<=c)
    {
        min=a;
    }
    else if(b<=a && b<=c)
    {
        min=b;
    }
    else
    {
        min=c;
    }
    return min;
}

int getmid(int a,int b,int c)
{
    if(a>b&&a<c)return a;
    if(b>a&&b<c)return b;
    if(c>a&&c<b)return c;
}

int main()
{
    int num;
    scanf("%d", &num);

    int ge ,shi ,bai;
    int maxbai,maxshi,maxge;
    bai = num / 100;
    shi = (num - bai * 100) / 10;
    ge = num % 10;
    maxbai=getmax(ge,shi,bai);
    maxge=getmin(ge,shi,bai);
    maxshi=getmid(ge,shi,bai);
    printf("%d%d%d",maxbai,maxshi,maxge);
    return 0;
}


