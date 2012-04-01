#include<iostream>
using namespace std;
int main()
{
	int a[500001]={0},b[4000000]={0},n;
	b[0]=1;
	while(cin>>n)
	{
		if(n==-1)break;
		int i;
		for(i=1;i<=n;i++)
			if(a[i]==0)
			{
				a[i]=a[i-1]-i;
				if(a[i]<=0||b[a[i]]!=0)
					a[i]+=2*i;
				b[a[i]]++;
			}
			cout<<a[n]<<endl;
				}
	return 0;
}


