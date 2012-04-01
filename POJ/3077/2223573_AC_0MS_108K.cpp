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
		int n,i,j,k;
		char str[10];
		cin>>n;
		
		itoa(n,str,10);
		j=strlen(str);

		for(i=1;i<j;i++)
		{k=pow(10,i);
			n=(n+5*k/10)/k;
			n=n*k;
		}
		cout<<n<<endl;
	}
	return 0;
}
		