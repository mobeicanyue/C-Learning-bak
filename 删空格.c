#include <stdio.h>
#include <string.h>
int main()
{
	char s[80];
	int i,j,k,x;
	gets(s);
	
	j=strlen(s);
	for(i=0;i<j;i++)
	{
		if(s[i]==' ')
		{
			for(x=i;x<=j;x++,i--)
			s[x]=s[x+1];
		}
	}
	printf("%s\n",s);
}
