#include<iostream>
using namespace std;
int main()
{
	int i,k;cin>>k;
	for(i=1;i<=k;i++)

	{
		int a[1000]={0};
		int n,j,m,sum=0;cin>>n;
		for(j=2;j<=n;j++)
		{
			for(m=1;m<=n;m++)
				if(m%j==0)
				{if(a[m]==1)
				a[m]=0;
				else if(a[m]==0)a[m]=1;}
			
		}

				for(j=1;j<=n;j++)
					if(a[j]==0)sum++;
					cout<<sum<<endl;
	}
	return 0;
}

