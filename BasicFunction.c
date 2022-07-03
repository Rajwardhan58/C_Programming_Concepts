#include<stdio.h>

int Addition(int iNo1,int iNo2)     //funtion defination
{
    int iAns=0;

    iAns=iNo1+iNo2;

    return iAns;        //return value of function
}

int main()
{
    int iValue1=11,iValue2=21,iAdd=0;

    iAdd=Addition(iValue1,iValue2);         //function call

    printf("Addition of two values are : %d\n",iAdd);
    return 0;
}