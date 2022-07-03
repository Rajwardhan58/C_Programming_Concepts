#include<stdio.h>

extern int E=71;            //Global variable

void Test1()
{
    auto int A=11;                  //local variable
    A++;
    printf("A : %d\n",A);
}

void Test2()
{
    static int A=11;                //local static variable
    A++;
    printf("A : %d\n",A);
}

int main()
{
    Test1();
    Test1();

    Test2();
    Test2();
    return 0;
}