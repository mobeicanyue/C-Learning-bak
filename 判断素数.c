#include "stdio.h"
int main()
{
	while(1)
	{
	int x,m;
	printf("x=");
	scanf("%d",&x);
	for(m=2;m<=x/2;m++)
	if(x%m==0)break;
	if(m>x/2)
	printf("%d������\n\n",x);
	else printf("%d��������\n\n",x); 
	}
}
