//д�Զ��庯������һ���ַ��������д�д��ĸɾ���� 
#include<stdio.h>
#include<string.h>
void dele(char s[])
{
	int x,j,i;
	j=strlen(s);
	for(i=0;i<j;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			for(x=i;x<=j;x++,i--)
			s[x]=s[x+1];
		}
	}
}

int main()
{
	char s[80];
	gets(s);
	dele(s);
	puts(s);
}
