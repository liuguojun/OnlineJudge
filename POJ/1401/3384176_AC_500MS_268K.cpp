#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		cin>>m;
		int i,j,k=0;
		j=5;
		while(j<=m)
		{
			k+=m/j;
			j=j*5;
		}
		
		cout<<k<<endl;
	}
	return 0;
}