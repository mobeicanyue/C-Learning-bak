#include <stdio.h>
int main()
{
	int a[3][4],max,i,j;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	scanf("%d",&a[i][j]);
	
	for(i=0;i<3;i++)
	{

max=a[i][0];
	for(j=0;j<4;j++)

		
		if(a[i][j]>max)
	
		 max=a[i][j];
		printf("%d  \n",max);
	
		}
	} 
 
