#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iAns=0;
    iAns=iNo1+iNo2;

    return iAns;
}

int main()
{
    int iValue1=10,iValue2=11;
    int iRet=0;

    int (*fptr)(int,int);

    fptr=Addition;

    iRet=fptr(iValue1,iValue2);

    printf("Addition is %d\n",iRet);

    return 0;
}