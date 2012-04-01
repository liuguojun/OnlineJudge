#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int n,t=0;
	cin>>n;
	t=n;
	while(n--)
	{
		int m;
		cin>>m;		
		int i,sum=0;		
		for(i=1;i<=m;i++)
			sum+=i*(i+1)*(i+2)/2;
		cout<<t-n<<" "<<m<<" "<<sum<<endl;
	}
	
}





