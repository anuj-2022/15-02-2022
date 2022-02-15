#include<stdio.h>

void inc(void)
{
static int a=0;
int b=0;
b++;
a++;
printf("\nstatic a=%d b=%d",a,b);
}
int main()
{
inc();
inc();
return 0;
}
