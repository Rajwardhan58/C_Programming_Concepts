#include<stdio.h>

int main()
{
    int A=11;
    A++;        //Allowed
    printf("A : %d\n",A);

    const int B=21;
    //B++           //NA
    printf("B : %d\n",B);

    return 0;
}