#include <stdio.h>
#include <windows.h>
#include <iostream>
 
using namespace std;
 
 
HWND GetConsoleHwnd()
{
	HWND hwndFound;         // ���Ҫ���صĿ���̨hwnd.
	TCHAR NewWindowTitle[512]; // ��ʱ���ڱ���
	TCHAR OldWindowTitle[512];   // ԭ�����ڱ���
	GetConsoleTitleW(OldWindowTitle, 512);//���ԭʼ���ڱ���
	wsprintfW(NewWindowTitle,L"%d,%d",GetTickCount(),GetCurrentProcessId());//����һ������ַ���
	SetConsoleTitle(NewWindowTitle);//������ַ����趨Ϊ����̨�Ĵ��ڱ���
	Sleep(100);//��100����
	hwndFound=FindWindow(NULL, NewWindowTitle);//�������Ǹղ��趨�Ĵ���
	//SetConsoleTitle(OldWindowTitle);//�õ�����hwnd���ٰѴ��ڱ��⻹ԭ
	SetConsoleTitle(L"�μӻ��Ʒ");
 
	return(hwndFound);//���ش���hwnd
}
int main()
{
	char Temp[100];//����һ���ַ��������Խ����û�����
	printf("������Ҫת��Ϊ���������:\n");
	scanf("%s",&Temp);//�û��ַ����뵽temp
    HWND hCon= GetConsoleHwnd();//�õ�����̨��hwnd
	HDC hDC = GetDC(hCon);   //�õ�����̨DC
	
	int Word[16][16]={0};//����̨������16x16��
 
	for(int x=0;x<16;x++)
	{
		for (int y=0;y<16;y++)
		{
			if (GetPixel(hDC,x,y+16)!=RGB(0,0,0))//ѭ��ɨ��ղ�����ط������أ�����Ǻ�ɫ��1
			{
				Word[x][y]=1;
			}else Word[x][y]=0;//��ɫ��0
		}
	}
 
	for (int i=0;i<16;i++)//ѭ����ӡ�ղ�ɨ��Ľ��
	{
		for (int j=0;j<16;j++)
		{
			if (Word[j][i]==1)
			{
				printf("*");//1�ĵط��ʹ�ӡ*
			} else printf(" ");//��ɫ��ӡ�ո�
		}
          printf("\n");
	}
	system("pause");
	return 0;
 
}

