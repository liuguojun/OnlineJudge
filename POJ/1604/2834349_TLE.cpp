#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int i;
		long int k=1;
		for(i=2;i<=n;i++)
		{
			k*=i;
			while(k%10==0)
			{
				k=k/10;
			}
			k=k%10000000000;
		}
		cout<<k%10<<endl;
	}
	return 0;
}