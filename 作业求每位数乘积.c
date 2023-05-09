#include <stdio.h>
#include <math.h>
int main()
{
	int a,i,b[i],x,m;
	printf("please input the digit of number:");
	scanf("%d",&a);
	printf("please input the number:");
	scanf("%d",&x);
	
	{
	b[0]=x/(pow(10,(a-1))); 
	for(i=1;i<a;i++)
	{
		b[i]=x/(pow(10,i));
		b[i]=b[i]%10;
	}
	{
	i=a;
		b[i]=x%10;}
}
for(i=0;i<=a;i++)
m*=b[i];

printf("%d",m);
}
