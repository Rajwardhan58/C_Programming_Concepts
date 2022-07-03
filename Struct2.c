#include<stdio.h>
#pragma pack(1)

struct Test
{
    int i;
    char ch;
    float f;
    int j;
};

int main()
{
    printf("%d\n",sizeof(struct Test));
    return 0;
}