#include <stdio.h>
#include <string.h>
int main()
{
	char str[10][80],string[80];
	int i,j;
	printf("比较大小，请输入10个字符串进行比较\n") ; 
	for(i=0;i<10;i++)
	gets(str[i]);
	for(j=0;j<9;j++)
	for(i=0;i<9-j;i++)
	if(strcmp(str[i],str[i+1])<0)
	{
		strcpy(string,str[i]);
		strcpy(str[i],str[i+1]);
		strcpy(str[i+1],string);
	}
	printf("\n");
	for(i=0;i<10;i++)
	printf("排序是%s  ",str[i]);
 } 
