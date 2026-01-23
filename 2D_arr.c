#include <stdio.h>

int main()
{
    // int arr[3][4]=
    // {
    //     {1,  2,  3,  4},
    //     {5,  6,  7,  8},
    //     {9, 10, 11, 12}
    // };
    // int (*p)[4]=arr;
    // int *q=arr[0];//arr[0]==&arr[0][0]
    // int *r=&arr[0][0];
    // printf("%p\n",p);
    // printf("%p\n",q);
    // printf("%p\n",r);
    // q=*(p+1);
    // q++;

    // printf("%p\n",p);
    // printf("%d\n",*p);
    // printf("%p\n",q);
    // printf("%d\n",*q);
  


    // int a[6]={1,2,3,4,5,6};
    // int *P=a;

    // printf("%d\n",*P++);
    // printf("%d\n",(*P)++);
    // printf("%d\n",++*P);
    // for(int i=0;i<6;i++)
    // {
    //     printf("%d ",a[i]);
    // }

    // int a[4]={1,2,3,4};
    // int (*p)[4]=&a;
    // int *q=*p;
    // printf("%ld\n",sizeof(p));
    // printf("%ld\n",sizeof(*p));
   
    // printf("%d\n",*(*p+1));
   
    char str[5][10]=
    {
        "hello",
        "world",
        "program",
        "c",
        "language"
    };
    printf("%s\n",str[2]);
    //str[3]="nice";//错误，数组名不可修改
    printf("%s\n",str[3]);
    char *q[10]=str;
    q[3]="nice";//正确，指针变量可以修改
    printf("%s\n",q[3]);
    char *p[5]=
    {
        "hello",
        "world",
        "program",
        "c",
        "language"
    };
    p[3]="nice";//正确，指针变量可以修改
    printf("%s\n",p[3]);
}


//1
//6
//2
//4

//5