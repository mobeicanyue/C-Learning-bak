//�Ӽ���������һ���ַ�����ͳ������ַ�����Сд��ĸ�ĸ���
#include <stdio.h>
int main()
{
	char s[80];
	int n=0,i;//n�ۼ�
	gets(s);
	for(i=0;s[i]!='\0';i++)
	if(s[i]>='a'&&s[i]<='z')
	n++;
	printf("%s��Сд��ĸ�ĸ���Ϊ%d\n",s,n);
 } 
