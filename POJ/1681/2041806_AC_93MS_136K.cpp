#include<iostream>
using namespace std;
int a[16][17],b[16][17],n;
bool check()
{
	int i,j;
	for(i=1;i<n;i++)
		for(j=1;j<=n;j++)
		{
			b[i+1][j]=(a[i][j]+b[i][j]+b[i-1][j]+b[i][j+1]+b[i][j-1])%2;
		//	a[i+1][j]=(a[i+1][j]+fill[i][j])%2;
			
		}
	for(i=1;i<=n;i++)
	{
		if((a[n][i]+b[n][i]+b[n-1][i]+b[n][i+1]+b[n][i-1])%2!=0)
	    	return (false);
	}
	return (true);
}
int main()
{
	int t,i,j;
	char ch;
	
	cin>>t;
	while(t--)
	{
		int count=0;
		memset(b,0,sizeof(b));
		cin>>n;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				cin>>ch;
				if(ch=='w')
					a[i][j]=1;
				else a[i][j]=0;
			}
		for(i=1;i<=n;i++)
			b[1][i]=0;
		int c=1;
		while(!check())
		{
			c=1;
			b[1][1]++;
			while(b[1][c]>1)
			{
				b[1][c]=0;
				c++;
				b[1][c]++;
			}
			if(c==n+1)
				break;
		}
		if(c==n+1)
			cout<<"inf"<<endl;
	
		else
		{
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(b[i][j]==1)
						count++;
				}
			}
			cout<<count<<endl;
		}
	}
return 0;
}


