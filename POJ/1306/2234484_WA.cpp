#include<iostream>
#include<cmath>
using namespace std;

unsigned int s[101][101];

unsigned int fun(int m,int n)
{
	if(n>m-n)n=m-n;
	
	if(n==0)return 1;
	
	if(s[m-1][n-1]==0)
		s[m-1][n-1]=fun(m-1,n-1);
	if(s[m-1][n]==0)
		s[m-1][n]=fun(m-1,n);
	return s[m-1][n-1]+s[m-1][n];
}


int main()
{
	int m,n;
	memset(s,0,sizeof(s));

	while(cin>>m>>n)
	{
	
	int k;
		if(n>m-n)k=m-n;
		else k=n;
		
	
		cout<<m<<" things taken "<<n<<" at a time is "<<fun(m,k)<<" exactly."<<endl;
	}
	return 0;
}
