#include"stdio.h"
int main()
{
	int i,j,k,l,n,m,o;
	printf("input \n");
	scanf("%d",&o);
	for(i=1;i<=o;i++)
	{
		for(j=1;j<=o-i;j++)
		printf(" ");
		for(k=0;k<=2*i-2;k++)
		printf("*");
		printf("\n");
	}
	for(l=1;l<=o-1;l++)
	{
		for(n=1;n<=l;n++)
		printf(" ");
		for(m=0;m<2*(o-l)-1;m++)
		printf("*");
		printf("\n");
	}
}
