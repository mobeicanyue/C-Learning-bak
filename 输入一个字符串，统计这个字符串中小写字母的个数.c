//从键盘上输入一个字符串，统计这个字符串中小写字母的个数
#include <stdio.h>
int main()
{
	char s[80];
	int n=0,i;//n累加
	gets(s);
	for(i=0;s[i]!='\0';i++)
	if(s[i]>='a'&&s[i]<='z')
	n++;
	printf("%s中小写字母的个数为%d\n",s,n);
 } 
