#include<iostream>
using namespace std;
int main()
{
	int t,n;
	while(cin>>t>>n)
	{
		if(t==0&&n==0)break;
		char str[20];int sum=0,a,i;
		for(i=0;i<n;i++)
		{
			cin>>str>>a;
			sum+=a;
		}
		cout<<n*3-sum<<endl;
	}				
	return 0;
}
