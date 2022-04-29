#include<stdio.h>

void swapp(int *,int *);

void swapp(int *a,int *b)
{

*a=*a^*b;
*b=*a^*b;
*a=*a^*b;
printf("after swapping the no are :%d   %d \n",*a,*b);

}
