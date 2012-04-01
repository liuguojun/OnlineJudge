#include<iostream>
using namespace std;
int board[16][17],paint[16][17],n;
bool check()
{
	int i,j;
	for(i=1;i<n;i++)
		for(j=1;j<=n;j++)
			paint[i+1][j]=(board[i][j]+paint[i][j]+paint[i-1][j]+paint[i][j+1]+paint[i][j-1])%2;
		
		for(i=1;i<=n;i++)
			if((board[n][i]+paint[n][i]+paint[n-1][i]+paint[n][i+1]+paint[n][i-1])%2!=0)
				return false;
			return true;
}
int main()
{
	int t,i,j;
	char ch;
	
	cin>>t;
	while(t--)
	{
		int count=0;
		
		cin>>n;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				cin>>ch;
				if(ch=='w')
					board[i][j]=1;
				else board[i][j]=0;
			}
			
			i=1;
			while(!check())
			{
				i=1;
				paint[1][1]++;
				while(paint[1][i]>1)
				{
					paint[1][i]=0;
					i++;
					paint[1][i]++;
				}
				if(i==n+1)
					break;
			}
			if(i==n+1)
				cout<<"inf"<<endl;
			
			else
			{
				for(i=1;i<=n;i++)
				{
					for(j=1;j<=n;j++)
					{
						if(paint[i][j]==1)
							count++;
					}
				}
				cout<<count<<endl;
			}
	}
	return 0;
}


