#include "stdio.h"
int max(int a,int b);
{if(a>b) return(a);else return(b);
}
void main ()
{int x,y,z,m;
scanf("%d%d%d",&x&y&z);
m=max(max(x,y),z);
printf("max=%d\n",m);
}
