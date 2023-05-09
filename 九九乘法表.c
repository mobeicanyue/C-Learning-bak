#include"stdio.h"
int main()
{
	int x,y;
	for(x=1;x<=9;x++)
	{for(y=1;y<=9;y++)        //y从1到9
	if(x>y)
	printf("        ");       //乘法表前的空格 
	else 
	printf("%d*%d=%2d  ",x,y,x*y);  //else到这句为止，printf是循环结束才做 
	printf("\n");
	}
	
}


