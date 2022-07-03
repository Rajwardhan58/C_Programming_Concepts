#include<stdio.h>

int main()
{
int no = 11;


int *x = &no;


int *p = &no;



int **q = &p;



int ***a = &q;



int ****b = &a;


int *****c = &b;

    printf("c can access the value : %d\n",*****c);

    return 0;
}







