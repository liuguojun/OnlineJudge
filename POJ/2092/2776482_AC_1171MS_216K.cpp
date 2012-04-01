#include<iostream>
using namespace std;
int main()
{
	int b,n,m,i,j,a[10005];
	while(cin>>n>>m)
	{
		if(n==0&&m==0)break;
		memset(a,0,sizeof(a));
		int max=0,max1=0,max2=0;
		for(i=1;i<=n*m;i++)
		{
			cin>>b;
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
			if(a[i]==max2)cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}


