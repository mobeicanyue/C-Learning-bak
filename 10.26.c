#include "stdio.h"
#include "math.h"
int main()
{
	float n=1,s=0,t;
	while (n<=100)
	{
		t=pow(-1,n+1)/n;
		s=s+t;
		n++;
	}
	printf("s=%.2f",s);
	return 0;
}
