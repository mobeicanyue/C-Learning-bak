#include"stdio.h"
int main()
{
	int x,y;
	for(x=1;x<=9;x++)
	{for(y=1;y<=9;y++)        //y��1��9
	if(x>y)
	printf("        ");       //�˷���ǰ�Ŀո� 
	else 
	printf("%d*%d=%2d  ",x,y,x*y);  //else�����Ϊֹ��printf��ѭ���������� 
	printf("\n");
	}
	
}


