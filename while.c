// #include <stdio.h>
// int main()
// {
//     unsigned int num, last_num = 0;
//     scanf("%d", &num);
//     while (num != 0)
//     {
//         last_num = num % 10;
//         printf("%d", last_num);
//         num /= 10;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int g,s,b;
    int i=100;
    while (i<=999)
    {
        g=i/100;
        s=(i%100)/10;
        b=i%10;
        if (i==g*g*g+s*s*s+b*b*b)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}