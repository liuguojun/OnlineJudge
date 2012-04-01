#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j;
		char str[20];
		cin>>n;
		
		itoa(n,str,10);
		j=strlen(str);
		for(i=1;i<j;i++)
		{
			n=(n+5*pow(10,i-1))/pow(10,i);
			n=n*pow(10,i);
		}
		cout<<n<<endl;
	}
	return 0;
}
		