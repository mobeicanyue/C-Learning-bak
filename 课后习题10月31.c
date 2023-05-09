#include "stdio.h"
int main()
{
	int x=100,a,b,c;
	while(x<=999)
	{
		a=x/100;
		b=x/10%10;
		c=x%10;
		if(a+b+c==14 && a*b*c==42)
		printf("%10d",x);
		x++;
	}
 } 
