#include<iostream>
using namespace std;
int main()
{
int m,n;
while(cin>>m>>n)
{
	int sum=0,i=0;

	while(m>=n)
	{
		sum+=n;
		i+=n;
		m=m+i/3-n;
		i=i%n;
	}
	if(m<n)sum+=m;
	cout<<sum<<endl;
}
return 0;
}
