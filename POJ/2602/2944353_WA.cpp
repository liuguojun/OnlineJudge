#include<iostream>
using namespace std;
int main()
{
	int a[1000005]={0},i,j,c,b,n;
	cin>>n;
	for(i=10;i<=n+9;i++)
	{
	cin>>c>>b;
	a[i]=c+b;
	}
	for(i=n+9;i>=10;i--)
		if(a[i]>=10)
		{
			a[i]=a[i]-10;
			a[i-1]++;
		}
		for(i=1;i<=n+9;i++)
			if(a[i]!=0)break;
			for(j=i;j<=n+9;j++)
				cout<<a[i];
			cout<<endl;
			return 0;
}
