#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
#define NBIT(x,n) 

int main()
{
    int arr[]={1,2,3,4,5};
    printf("%d\n", ARRAY_SIZE(arr));
    return 0;
}