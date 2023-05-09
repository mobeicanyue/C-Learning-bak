#include "stdio.h"
int main()
{
	int x,m;
	scanf("%d",&x);
	for(m=2;m<=x/2;m++)
	if(x%m==0)break; 
		if(m>x/2)
		printf("%d是素数",x);
		else printf("%d不是素数",x); 	
 } 
