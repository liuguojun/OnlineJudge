#include<iostream>
using namespace std;
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
	int prime[15000]={2,3,5,0};
	creat_prime(prime,50000);

	while(cin>>m>>a>>b)
	{
		if((m==0)&&a==0&&b==0)break;
		int p,q,max=0,i,j,maxp=0,maxq=0;
		for(i=0;i<66;i++)
		{
			for(j=i;prime[i]*prime[j]<m;j++)
			{
				if(a*prime[j]<=b*prime[i]&&prime[i]*prime[j]>max)
				{
					max=prime[i]*prime[j];
					maxp=prime[i];
					maxq=prime[j];
				}
			}
		}
		cout<<maxp<<" "<<maxq<<endl;
	}
	return 0;
}






