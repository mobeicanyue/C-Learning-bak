#include<stdio.h>
int main()
{int i;
float e=1;
for(i=1;1.0/fac(i)>0.000001;i++)
e+=1.0/fac(i);
printf("%5.4f",e);
}

int fac(int x)
{int s=1,i;
for(i=1;i<=x;i++)
s=s*i;
return(s);
}

