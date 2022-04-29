#include "toggle.h"

int main()
{
int x,p,n,a,i;
printf("enter the no \n");
scanf("%d",&x);
printf("enter the position\n");
scanf("%d",&p);
n=sizeof(x);
nbprint(n,x);
a=TOGGLE(x);
printf("after toggle the bit the %d is the postion \n",p);
naprint(n,a);
printf("%d",a);
return 0;

}

