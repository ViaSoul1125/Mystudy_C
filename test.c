#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char b[10]="he\0llo";
    scanf("%s", a);
    int c=strlen(a);
    printf("%d\n",c);
    c=strlen(b);
    printf("%d\n",c);


    return 0;
}