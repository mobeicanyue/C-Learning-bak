#include "stdio.h"
int main()
{
	int n,s,y=0;
	printf("����������: ");
	scanf("%d", &n);
	s=n;
	while(s>0)
	{
		y=y*10+s%10;
		s=s/10;
	}
	if(y==n)
	{
		printf("%d��һ��������\n", n);
	}
	else
	{
		printf("%d����һ��������\n", n);
	}
}
