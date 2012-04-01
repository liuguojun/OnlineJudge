#include<stdio.h>

void creat_prime(int *prime,int n)
{
	int flag=2;
	int t=3;
	int i,j;
	for(i=7;i<n;i+=flag)
	{
		flag=6-flag;
		for(j=0;prime[j]*prime[j]<i;j++)
		{
			if(i%prime[j]==0)break;
		}
		if(prime[j]*prime[j]>i)
		{
			prime[t]=i;
			t++;
		}

	}

}

int main()
{
	int m,a,b;
	int prime[2048]={2,3,5,0};
	creat_prime(prime,10000);

	while(scanf("%d %d %d",&m,&a,&b))
	{
		if((m==0)&&a==0&&b==0)break;
		int max=0,i,j,maxp=0,maxq=0;
		for(i=68;i>=0;i--)
		{
			for(j=i;prime[i]*prime[j]<=m;j++)
			{
				if(a*prime[j]<=b*prime[i]&&prime[i]*prime[j]>max)
				{
					max=prime[i]*prime[j];
					maxp=prime[i];
					maxq=prime[j];
				}
			}
		}
		printf("%d %d\n",maxp,maxq);
	}
	return 0;
}







