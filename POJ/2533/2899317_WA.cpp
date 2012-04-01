#include<iostream>
using namespace std;
int main()
{
	int a[1005],b[1005]={0},n,i,j,temp;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	b[0]=1;
	temp=0;
	for(i=1;i<n;i++)
	{
		temp=0;
		for(j=0;j<i;j++)
			if(a[j]<=a[i])
			{
				if(temp<b[j])
					temp=b[j];
			}
			b[i]=temp+1;
	}
	cout<<b[n-1]<<endl;
	return 0;
}

