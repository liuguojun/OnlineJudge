#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	cin>>l;
	for(k=0;k<l;k++)
	{
		char a[33];
		cin>>a;
		int b[4]={0};
		for(i=0;i<4;i++)
			for(j=8*i;j<=7+8*i;j++)
				b[i]=2*b[i]+a[j]-'0';
			for(i=0;i<3;i++)
				cout<<b[i]<<".";
			cout<<b[3]<<endl;
	}
	return 0;
}
