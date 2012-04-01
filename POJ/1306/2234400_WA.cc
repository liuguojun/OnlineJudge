#include<iostream>
#include<cmath>
using namespace std;

int s[101][101];

double fun(int m,int n)
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
		double a;
	int k;
		if(n>m-n)k=m-n;
		else k=n;
		
		a=fun(m,k);
		cout<<m<<" things taken "<<n<<" at a time is "<<a<<" exactly."<<endl;
	}
	return 0;
}