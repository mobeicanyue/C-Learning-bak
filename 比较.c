#include <stdio.h>
#include <string.h>
int main()
{
	char a[80],b[80];
	int i,j,m;
	gets(a);
	gets(b);
	for(i=0;i<80;i++)
	{
		if(a[i]!=b[i])
		{m=a[i]-b[i];
		break;} 
	}
	printf("%d",m);
}
