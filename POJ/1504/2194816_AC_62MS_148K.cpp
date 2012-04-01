#include<iostream>
#include<cstring>
using namespace std;
int fun(int n)
{
	char m[10],ch[10];
	itoa(n,m,10);
	int i,j=0,k;
	k=strlen(m);
	for(i=k-1;i>=0;i--)
ch[k-i-1]=m[i];
	for(i=0;i<k;i++)
		j=10*j+ch[i]-'0';
	return j;
}


int main()
{
	int m,k;cin>>m;
	for(k=0;k<m;k++)
	{int a,b;cin>>a>>b;
	cout<<fun(fun(a)+fun(b))<<endl;
	}
	return 0;
}


