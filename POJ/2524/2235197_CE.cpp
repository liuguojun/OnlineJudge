#include<stdio.h>
using namespace std;
	int a[50005];
void main()
{
	

	int n,m,t=0;
	while(scanf("%d%d",&n,&m))
	{
		int i,j,k=0,c,d;
		if(n==0&&m==0)break;
		t++;
		for(i=0;i<=n;i++)
			a[i]=i;
		for(i=1;i<=m;i++)
		{
			scanf("%d%d",&c,&d);
			if(c<=d)a[d]=a[c];
			else a[c]=a[d]; 
		}
		for(i=1;i<=n;i++)
			if(a[i]!=i)k++;
			printf("Case %d: %d\n",t,n-k);   
	}
}

