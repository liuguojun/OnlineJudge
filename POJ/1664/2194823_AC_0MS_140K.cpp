#include<iostream>
using namespace std;
int fun(int a,int b)
{
	if(a==0||b==1)return 1;
	if(a<b)return fun(a,a);
	return fun(a,b-1)+fun(a-b,b);
}
int main()
{
	int n;cin>>n;
	while(n--)
	{
		int i,j;
		cin>>i>>j;
		cout<<fun(i,j)<<endl;
	}
	return 0;
}

