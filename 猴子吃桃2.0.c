#include "stdio.h"
int main()
{
	int x=1,n=1;
	do
	{
		x=(x+1)*2;
		n++;
		printf("这猴子吃了%d个peach\n",x);
	}while(n<10);
	
}

