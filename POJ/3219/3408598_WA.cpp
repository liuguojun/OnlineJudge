#include<iostream>
using namespace std;
int main()
{
	int m,n,a[8][8]={1,1,1,1,1,1,1,1,
		1,0,1,0,1,0,1,0,
		1,1,0,0,1,1,0,0,
		1,0,0,0,1,0,0,0,
		1,1,1,1,0,0,0,0,
		1,0,1,0,0,0,0,0,
		1,1,0,0,0,0,0,0,
		1,0,0,0,0,0,0,0};
	while(cin>>m>>n)
	{
		
		m=m%8;n=n%8;
		cout<<a[n][n+m]<<endl;
	}
	return 0;
}
