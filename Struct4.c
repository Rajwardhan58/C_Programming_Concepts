#include<stdio.h>

struct Test
{
    float f;
    int no;
    struct Demo
    {
        int i;
        int j;
    }dobj;
};

int main()
{
    struct Test tobj;

    tobj.f = 10.11;
    tobj.no = 11;
    tobj.dobj.i = 21;
    tobj.dobj.j = 51;

    printf("%d\n",tobj.dobj.i); // 21
    printf("%d\n",sizeof(tobj));    // 16
    return 0;
}