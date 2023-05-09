#include <stdio.h>
int main()
{
	int i,n,k=0;
	for(i=101;i<200;i++)
	{
	for(n=2;n<=(i/2);n++)
	if(i%n==0) break;
	if(n>=(i/2))
	{
	printf("%d ",i);
	k++;}
}
printf("\n %d",k);
}
