#include<stdio.h>
int main()
{
	int b,n,m,i,j;
	while(scanf("%d%d",&n,&m))
	{int a[10005]={0};
		if(n==0&&m==0)break;
		memset(a,0,sizeof(a));
		int max=0,max1=0,max2=0;
		for(i=1;i<=n*m;i++)
		{
			scanf("%d",&b);
			a[b]++;
			if(max<b)max=b;
		}
		for(i=1;i<=max;i++)
		{
			if(max1<a[i])max1=a[i];
		}
		for(i=1;i<=max;i++)
		{
			if(max2<a[i]&&a[i]!=max1)max2=a[i];
		}
		for(i=1;i<=max;i++)
		{
			if(a[i]==max2)printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}


