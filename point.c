#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    for(int i=0;i<=4;i++)
    {
        printf("arr[i] out%d\n",arr[i]);
    }
    for(int i=0;i<=4;i++)
    {
        printf("*(p+i) out%d\n",*(p+i));
    }
    
    
    return 0;
}