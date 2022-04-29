#include<stdio.h>

void MSB_Bit(int);


void MSB_Bit(int n)
{
    int x;
    x=8;
    x=x-1;
    printf("size of n: %d\n",x);
    n=n&(1<<x);
    if(n)
    {
        printf("set\n");
    }
    else
    {
        printf("not set\n");
    }
}

