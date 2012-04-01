#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m,i,j,k,sum=0;
		char str[20];
		cin>>str>>m;
		k=sqrt(2*m);
		for(i=1;i<=k;i++)
		{
			j=2*m/(i+1);
			if(2*m%(i+1)==0&&j>i&&(j-i)%2==0)sum++;
		}
		cout<<str<<" "<<sum<<endl;
	}
	return 0;
}

