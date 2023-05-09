#include "stdio.h"
int main()
{
	int a,b,c=0,d=0;
	scanf("%d %d",&a,&b);
	for(a+1;a<=b-1;a++)
	{if((a+1)%2==0) c=c+a;
	else d=d+a;
	}
	printf("%d %d",c,d);
}
