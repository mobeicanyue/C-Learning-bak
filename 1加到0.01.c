//Çó1-1/2+1/3-1/4+1/5...-1/100 
#include<stdio.h>
int main()
{
	float s1=0,s2=0,s,i,j;
	for(i=1;i<=99;i+=2)
	s1+=(1.0/i);
	for(i=-2;i<=-100;i-=2)
	s2+=(1.0/i);
	s=s1+s2;
	printf("%f",s);
	return 0;
}
