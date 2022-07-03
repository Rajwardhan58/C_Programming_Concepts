#include<stdio.h>

int G=11;               //this is global variable

void Test()
{
    auto int L1=21;             //this is local variable
    int L2=31;                  //this is also local variable
    
    register int R=41;          //this is register storage class variable
}

int main()
{
    int M=51;
    auto int C=61;
    Test();                     //Function call
    return 0;
}