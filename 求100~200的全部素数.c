#include "stdio.h"
#include "math.h"
int main()
{
	int x,m;
	for(x=101;x<=200;x+=2)    //Ϊʲô��2����Ϊż���ز��������� 
	{
		for(m=2;m<=sqrt(x);m++)
		if(x%m==0)break;       //���������ֱ����������һ��for����printf. 
		if(m>sqrt(x))         //Ϊʲô���ڸ���2�Ϳ��������ֵ��ǰ��û�к����û�С����C  ����133ҳ. 
		printf("%5d",x);
	 } 
 } 
