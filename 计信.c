#include <stdio.h>
#include <windows.h>
#include <iostream>
 
using namespace std;
 
 
HWND GetConsoleHwnd()
{
	HWND hwndFound;         // 最后要返回的控制台hwnd.
	TCHAR NewWindowTitle[512]; // 临时窗口标题
	TCHAR OldWindowTitle[512];   // 原来窗口标题
	GetConsoleTitleW(OldWindowTitle, 512);//获得原始窗口标题
	wsprintfW(NewWindowTitle,L"%d,%d",GetTickCount(),GetCurrentProcessId());//产生一个随机字符串
	SetConsoleTitle(NewWindowTitle);//把随机字符串设定为控制台的窗口标题
	Sleep(100);//隔100毫秒
	hwndFound=FindWindow(NULL, NewWindowTitle);//查找我们刚才设定的窗口
	//SetConsoleTitle(OldWindowTitle);//得到窗口hwnd后再把窗口标题还原
	SetConsoleTitle(L"参加活动作品");
 
	return(hwndFound);//返回窗口hwnd
}
int main()
{
	char Temp[100];//定义一个字符数组用以接收用户输入
	printf("请输入要转换为点阵的文字:\n");
	scanf("%s",&Temp);//用户字符输入到temp
    HWND hCon= GetConsoleHwnd();//得到控制台的hwnd
	HDC hDC = GetDC(hCon);   //得到控制台DC
	
	int Word[16][16]={0};//控制台中文是16x16的
 
	for(int x=0;x<16;x++)
	{
		for (int y=0;y<16;y++)
		{
			if (GetPixel(hDC,x,y+16)!=RGB(0,0,0))//循环扫描刚才输入地方的像素，如果非黑色就1
			{
				Word[x][y]=1;
			}else Word[x][y]=0;//底色就0
		}
	}
 
	for (int i=0;i<16;i++)//循环打印刚才扫描的结果
	{
		for (int j=0;j<16;j++)
		{
			if (Word[j][i]==1)
			{
				printf("*");//1的地方就打印*
			} else printf(" ");//底色打印空格
		}
          printf("\n");
	}
	system("pause");
	return 0;
 
}

