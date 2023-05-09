#include <stdio.h>
int fac(int x)
{
	int s=1,i;
	for(i=1;i<=x;i++)
	s*=i;
	return(s);
 } 
 int main()
 {
 	int s;
 	s=fac(2)+fac(3)+fac(5);
 	printf("s=%d\n",s);
 }
