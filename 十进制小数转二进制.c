#include "stdio.h"
int main()
{
	float x,n=1;
	scanf("%f",&x);
	
	while(n<=5)
	{
		x=x*2;
		if(x>1)
		{
		x=x-1;
		printf("1");}
		else
		printf("0");
		n++;
	}
}
