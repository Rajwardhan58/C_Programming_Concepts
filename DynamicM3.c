#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize=0;

    printf("Enter the size\n");
    scanf("%d",&iSize);

    int *iPtr=NULL;

    iPtr=(int *)malloc(iSize*sizeof(int));
    if(iPtr==NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("Memory successfully allocated \n");
    }

    printf("------------------------------------------\n");

    printf("enter the size for memory reallocation\n");
    int size=0;
    scanf("%d",&size);

    iPtr=(int *)realloc(iPtr,size*sizeof(int));
    if(iPtr==NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("Memory successfully reallocated \n");
    }
    free(iPtr);
    return 0;
}