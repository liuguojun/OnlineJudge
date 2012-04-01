#include<iostream>
#include<cmath>
using namespace std;

unsigned int  s[105][105];

unsigned int  fun(int m,int n)
{

	
	if(n==0)return 1;
	if(m==n)return 1;
		
		if(s[m][n]>0)
		
	return s[m][n];
		
	s[m][n]=fun(m-1,n)+fun(m-1,n-1);
	return s[m][n];
}


int main()
{
	int m,n,i,j;
	memset(s,0,sizeof(s));
	
	

	while(cin>>m>>n)
	{
		if(m==0)break;
	if(n>m-n)n=m-n;		
		
		cout<<m<<" things taken "<<n<<" at a time is "<<fun(m,n)<<" exactly."<<endl;
	}
	return 0;
}