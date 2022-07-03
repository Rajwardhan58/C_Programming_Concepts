#include<stdio.h>

struct Test
{
    int i;
    int j;
};

int main()
{
    const struct Test obj={11,21};

    printf("%d\n",obj.i);
    printf("%d",obj.j);
    // obj.i++; Not allowed
    return 0;
}