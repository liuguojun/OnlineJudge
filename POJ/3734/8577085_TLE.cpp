#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while( n-- )
	{
		int t; 
		cin >> t;
		int a = 1;
		int b = 2;
		int c = 0;
		if( t == 1)
			cout<<b<<endl;
		
		else {
			for(int j =2;j<=t;j++)
			{
				c = 2* (a+b)% 10007;
				a= b;
				b=c;
			}
			cout<<c<<endl;
		}
	}
	return 0;
}
