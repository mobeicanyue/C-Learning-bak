/*�Ӽ���������10�������������ֵ���һ������������Сֵ�����һ����������Ȼ��
�����ʮ���� */ 
#include <stdio.h>
int main()
{
	int a[10],max,min,i,t;
	for(i=0;i<=9;i++)     //һά��������� 
	scanf("%d",&a[i]);    //һά���������
	max=a[0];             //��MAXһ�����������еĳ�ֵ���ú�ѭ����ʣ�µıȽ� 
	
	for(i=0;i<=9;i++)
	if(max<a[i])
	max=a[i];
	for(i=0;i<=9;i++)
	if(max==a[i])                 //Ѱ��MAX���ĸ�I 
	{t=a[0];a[0]=a[i];a[i]=t;}    //�����ֵ����ǰ�� 
	
	for(i=0;i<=9;i++)
	if(min>a[i])
	min=a[i];
	for(i=0;i<=9;i++) 
	if(min==a[i])
	{t=a[9];a[9]=a[i];a[i]=t;
	}
	for(i=0;i<=9;i++)
	printf("%d ",a[i]);
 } 
