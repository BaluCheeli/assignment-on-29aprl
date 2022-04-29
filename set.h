#include<stdio.h>
#define SET(x) x|(0x01<<p)

void nbprint(int ,int );
void naprint(int ,int );

void nbprint(int n,int x)
{
for(int i=n-1;i>=0;i--)
{
if(x&(1<<i))
printf("1");
else
	printf("0");
}

}

void naprint(int n,int a)
{
for(int i=n-1;i>=0;i--)
{
if(a&(1<<i))
printf("1");
else
	printf("0");
}
printf("\n");

}
