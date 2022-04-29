#include<stdio.h>

void nth(int ,int );


void nth(int n,int p)
{
    int x;
    x=8;
    x=x-1;
    printf("size of n: %d\n",x);
    n=n&(1<<p);
    if(n)
    {
        printf(" %d set \n", p);
    }
    else
    {
        printf("%d not set\n",p);
    }
}

