#include<iostream>
using namespace std;
int main()
{

	int n;
	cin>>n;
	while(n--)
	{	int a[20]={0};
		char str[1005];
		cin>>str;
		int i,j;
		for(i=0;str[i]!=0;i++)
			a[str[i]-'0']++;
		for(i=0;i<20;i++)
			if(a[i]!=0)
				cout<<a[i]<<i;
			cout<<endl;
	}
	return 0;
}