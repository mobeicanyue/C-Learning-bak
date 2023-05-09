#include "stdio.h"
int main()
{
	int x=100,a,b,c;
    for(;x<=999;x++)
    {
	a=x/100,b=x/10%10,c=x%10; 
	if(a*a*a+b*b*b+c*c*c==x) 
    printf("%10d",x);
    }
}

 
