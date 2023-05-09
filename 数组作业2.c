#include <stdio.h>
int main()
{
	int b,s[10]={0},n,a,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		b=a%10;
		s[b]++;
	}
	for(b=0;b<10;b++)
	printf("整数各个位为%d的个数是%d\n",b,s[b]);
}
