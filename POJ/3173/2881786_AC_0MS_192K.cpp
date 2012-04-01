#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int a[25][25],n,s,i,j;
	cin>>n>>s;
/*	for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
			a[i][j]=0;*/
	a[1][1]=s%9;
	if(a[1][1]==0)
		a[1][1]=9;
	
	for(i=2;i<=n;i++)
	{
		a[1][i]=(a[1][i-1]+i-1)%9;
		if(a[1][i]==0)a[1][i]=9;
	}
	for(i=2;i<=n;i++)
		for(j=2;j<=i;j++)
		{
			a[j][i]=(a[j-1][i]+1)%9;
			if(a[j][i]==0)a[j][i]=9;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<i;j++)
			cout<<" "<<" ";
			for(j=j;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	
}

		
		
		
		
