#include<iostream>
using namespace std;
int main()
{
	int a[1000005]={0},i,j,c,b,n;
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
	cin>>c>>b;
	a[i]=c+b;
	}
	for(i=n-1;i>0;i--)
		if(a[i]>=10)
		{
			a[i]=a[i]-10;
			a[i-1]++;
		}
		for(i=0;i<=n-1;i++)
		
				cout<<a[i];
			cout<<endl;
			return 0;
}
