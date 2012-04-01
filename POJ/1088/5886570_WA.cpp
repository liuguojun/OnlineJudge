#include <iostream>
using namespace std;
int sum[110][110];
	int s[110][110];
int fun(int i,int j)
{
	if(sum[i][j]!=0)return sum[i][j];

	int num=0;
	if(s[i][j]>s[i-1][j])
	{
	if(sum[i-1][j]==0)
		sum[i-1][j]=fun(i-1,j);
	}

	if(s[i][j]>s[i+1][j])
	{
	if(sum[i+1][j]==0)
		sum[i+1][j]=fun(i+1,j);
	}

	if(s[i][j]>s[i][j-1])
	{
	if(sum[i][j-1]==0)
		sum[i][j-1]=fun(i,j-1);
	}

	if(s[i][j]>s[i][j+1])
	{
	if(sum[i][j+1]==0)
		sum[i][j+1]=fun(i,j+1);
	}


	if(num<sum[i-1][j])
		num=sum[i-1][j];

	if(num<sum[i+1][j])
		num=sum[i+1][j];

		if(num<sum[i][j-1])
		num=sum[i][j-1];

			if(num<sum[i][j+1])
		num=sum[i][j+1];
	return num+1;

}


int main()
{
	int m,n;
	cin>>m>>n;

	int i,j;
	for(i=0;i<=n+1;i++)
	{
		s[0][i]=10050;
		s[m+1][i]=10050;
	}
	for(i=0;i<=m+1;i++)
	{
		s[i][0]=10050;
		s[i][n+1]=10050;
	}
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>s[i][j];

	for(i=0;i<110;i++)
		for(j=0;j<110;j++)
		sum[i][j]=0;
      
		
		int max=0;
		for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if((s[i][j]<=s[i+1][j])&&(s[i][j]<=s[i-1][j])&&(s[i][j]<=s[i][j-1])&&(s[i][j]<=s[i][j+1]))
				sum[i][j]=1;
		}
		for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(sum[i][j]==0)
				sum[i][j]=fun(i,j);
			if(max<sum[i][j])
				max=sum[i][j];

		}
		cout<<max<<endl;
		return 0;
}

