#include "stdio.h"
int main()
{
	char c;
	scanf("%c",&c);
	while(c!='\n')
	{
		if(c>='a'&&c<='z')
		c=c-32;
		else if(c>='A'&&c<='Z')
		c=c+32;
		printf("%c",c);
		scanf("%c",&c);
	}
}
