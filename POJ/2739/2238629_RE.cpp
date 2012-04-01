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
	int i,j,k,n,sum,flag;
	int prime[2048]={2,3,5,0};
	creat_prime(prime,10000);
	while(cin>>n)
	{
		flag=0;
		for(i=1;i<=n/2;i++)
			for(j=0; ;j++)
			{
				sum=0;
				for(k=j;k<i+j;k++)
				{
					sum+=prime[k];
					if(sum>n)break;
				}
				if(sum==n)
					flag++;
							}
			cout<<flag<<endl;
	}



	return 0;
}
