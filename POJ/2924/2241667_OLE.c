#include<stdio.h>
#include<math.h>
int main()
{
	int t,h;
	scanf("%d",&t);
	h=t;
	while(t--)
	{

 _int64 m,n,k;
	while(scanf("%I64d%I64d",&m,&n))
	{k=(m+n)*(n-m+1)/2;
		printf("Scenario #%d:\n%I64d\n",h-t,k);
	}
	}
	return 0;
}


	