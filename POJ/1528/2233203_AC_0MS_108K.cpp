#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int check(int n)
{
	int i,k=0;
	for(i=1;i<=n/2;i++)
		if(n%i==0)k+=i;
		if(k==n)return 1;
		if(k>n)return 2;
		if(k<n)return 0;
}
int main()
{
	int a[110],i=0,j;
	while(cin>>a[i])
	{
		if(a[i]==0)break;
		else i++;
	}
	cout<<"PERFECTION OUTPUT"<<endl;
	for(j=0;j<i;j++)
	{
	cout<<setw(5)<<a[j]<<"  ";
	if(check(a[j])==1)cout<<"PERFECT"<<endl;
	if(check(a[j])==2)cout<<"ABUNDANT"<<endl;
	if(check(a[j])==0) cout<<"DEFICIENT"<<endl;
	}
	cout<<"END OF OUTPUT"<<endl;
	return 0;
}

