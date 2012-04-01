#include<iostream>
using namespace std;
void main(){int n,t;cin>>n;t=n;
	while(n--)
	{int m,i,sum=0;	cin>>m;	for(i=1;i<=m;i++)sum+=i*(i+1)*(i+2)/2;cout<<t-n<<" "<<m<<" "<<sum<<endl;}}
	






