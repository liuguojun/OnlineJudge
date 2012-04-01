#include<stdio.h>
void main(){int n,t;scanf("%d",&n);t=n;
	while(n--)
	{int m,i,sum=0;scanf("%d",&m);	for(i=1;i<=m;i++)sum+=i*(i+1)*(i+2)/2;printf("%d %d %d\n",t-n,m,sum);}}
	






