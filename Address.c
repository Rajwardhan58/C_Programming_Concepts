#include<stdio.h>

int main()
{
    int no = 11;

    char ch = 'A';
    
    printf("%d",no);   // 11

    printf("Value of ch : %c \n",ch);   // A

    printf("Address of no is : %u\n",&no);  // ADDRESS

    printf("Address of ch is  : %u\n",&ch); // ADDRESS

    printf("Size of no is : %d\n",sizeof(no));  // 4

    printf("Size of ch is : %d\n",sizeof(ch));  // 1

    return 0;
}