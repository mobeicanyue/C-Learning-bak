#include "stdio.h"
#include "math.h"
int main()
{
	int x,m;
	for(x=101;x<=200;x+=2)    //为什么加2？因为偶数必不是素数。 
	{
		for(m=2;m<=sqrt(x);m++)
		if(x%m==0)break;       //这里结束了直接跳出至上一个for，不printf. 
		if(m>sqrt(x))         //为什么大于根号2就可以输出数值？前面没有后面必没有。详见C  书上133页. 
		printf("%5d",x);
	 } 
 } 
