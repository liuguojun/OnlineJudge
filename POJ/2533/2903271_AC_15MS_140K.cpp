#include<iostream>
using namespace std;
int main()
{
	int a[1005],b[1005]={0},n,i,j,temp,max;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	b[0]=1;
max=b[0];
	for(i=1;i<n;i++)
	{
		temp=0;
		for(j=0;j<i;j++)
			if(a[j]<a[i])
			{
				if(temp<b[j])
					temp=b[j];
			}
			b[i]=temp+1;
if(b[i]>max)max=b[i];
	}
	cout<<max<<endl;
	return 0;
}
