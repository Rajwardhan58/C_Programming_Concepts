#include<stdio.h>

struct Test
{
    int iNo;
    struct Test *tPtr;
};

int main()
{
    struct Test obj1,obj2,obj3;

    struct Test *ptr=&obj1;

    obj1.iNo=11;
    obj1.tPtr=&obj2;

    obj2.iNo=21;
    obj2.tPtr=&obj3;

    obj3.iNo=31;
    obj3.tPtr=NULL;

    printf("%d\n",obj1.tPtr->tPtr->iNo);
    return 0;
}