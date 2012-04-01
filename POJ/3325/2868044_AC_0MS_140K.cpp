#include<iostream>
using namespace std;
int main()
{
	int n;

	while(cin>>n)
	{
		if(n==0)break;
		int a[105],i,j,c=0,b=100000000,sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(c<a[i])c=a[i];
			if(b>a[i])b=a[i];
		}
		cout<<(sum-c-b)/(n-2)<<endl;
	}
	return 0;
}
