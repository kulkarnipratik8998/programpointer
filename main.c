#include <stdio.h>
#include <stdlib.h>
#define LENGTH 3
int data[LENGTH];

int main(int argc, char **argv)
{
    int *pi;
    int **ppi;
    printf("multiple indirection example\n");

    for(int i = 0; i < LENGTH; i++)
    {

        data[i] = i;

    }
    for (int i = 0; i < LENGTH
    ; i++)
    {
        printf("%d\n",data[i]);

    }
    pi = data;
    ppi = &pi;
    for(int i = 0; i < LENGTH; i++)
    {
        printf("\nLoop[%d] array address is %p\n",i,data);
        printf("item pointed to by pi is %d\n", *pi);
        printf("item pointed to by ppi is %p\n", *ppi);
        printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
        printf("The Address of pi is %p and the value of pi (what it points to) is %p\n\n", *pi,ppi);

        pi += 1;


    }
    return 0;
}
