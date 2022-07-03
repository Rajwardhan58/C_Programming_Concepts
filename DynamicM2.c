#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize=0;

    printf("Enter the size\n");
    scanf("%d",&iSize);

    int *ptr=NULL;

    ptr=(int *)calloc(iSize,sizeof(int));

    if(ptr==NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("memory allocate succesfully\n");
    }

    free(ptr);
    return 0;
}