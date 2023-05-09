#include "stdio.h"
int main()
{
	int n,s,y=0;
	printf("请输入数字: ");
	scanf("%d", &n);
	s=n;
	while(s>0)
	{
		y=y*10+s%10;
		s=s/10;
	}
	if(y==n)
	{
		printf("%d是一个回文数\n", n);
	}
	else
	{
		printf("%d不是一个回文数\n", n);
	}
}
