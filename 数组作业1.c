/*从键盘上输入10个整数，将最大值与第一个数交换，最小值与最后一个数交换，然后
输出这十个数 */ 
#include <stdio.h>
int main()
{
	int a[10],max,min,i,t;
	for(i=0;i<=9;i++)     //一维数组的输入 
	scanf("%d",&a[i]);    //一维数组的输入
	max=a[0];             //给MAX一个任意数组中的初值，让后循环与剩下的比较 
	
	for(i=0;i<=9;i++)
	if(max<a[i])
	max=a[i];
	for(i=0;i<=9;i++)
	if(max==a[i])                 //寻找MAX是哪个I 
	{t=a[0];a[0]=a[i];a[i]=t;}    //将最大值换到前面 
	
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
