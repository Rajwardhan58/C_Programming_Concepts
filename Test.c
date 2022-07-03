#include<stdio.h>
#include "Test.h"

int main()
{
    struct Test tobj;

    tobj.i=11;
    tobj.j=21;
    tobj.k=31;
    printf("Max value is : %d\n",MAX);
    printf("%d\n",tobj.i);
    printf("Size of structure : %d\n",sizeof(struct Test));
    return 0;
}