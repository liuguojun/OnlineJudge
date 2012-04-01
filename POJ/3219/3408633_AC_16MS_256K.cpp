#include<iostream>
using namespace std;
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		int sum1=0,sum2=0,i;
		i=n-k;
		while(n>1)
		{
			n=n/2;
			sum1+=n;
		}
		while(k>1)
		{
			k=k/2;
			sum2+=k;
		}
		k=i;
while(k>1)
		{
			k=k/2;
			sum2+=k;
		}
		if(sum1==sum2)cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}

