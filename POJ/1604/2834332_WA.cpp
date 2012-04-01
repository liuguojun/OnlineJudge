#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int i,k=1;
		for(i=2;i<=n;i++)
		{
			k*=i;
			while(k%10==0)
			{
				k=k/10;
			}
			k=k%100000;
		}
		cout<<k%10<<endl;
	}
	return 0;
}