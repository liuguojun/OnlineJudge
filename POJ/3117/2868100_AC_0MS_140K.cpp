#include<iostream>
using namespace std;
void main()
{	int t,n;
	while(cin>>t>>n)
	{
		if(t==0&&n==0)break;
		char str[20];int sum=0,a,i;
		for(i=0;i<t;i++)
		{cin>>str>>a;sum+=a;}
		cout<<n*3-sum<<endl;}	
}
