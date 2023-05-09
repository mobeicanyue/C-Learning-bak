#include"stdio.h"
int main()
{
	int i,j,k,l,n,m;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		printf(" ");
		for(k=0;k<=2*i-2;k++)
		printf("*");
		printf("\n");
	}
	for(l=1;l<=3;l++)
	{
		for(n=1;n<=l;n++)
		printf(" ");
		for(m=0;m<7-2*l;m++)
		printf("*");
		printf("\n");
	}
}
