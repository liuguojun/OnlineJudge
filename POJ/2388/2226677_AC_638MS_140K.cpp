#include<iostream>
using namespace std;

int main()
{
	int n,a[10005],i,j,t;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{if(a[j]>a[j+1])
		{
			t=a[j];a[j]=a[j+1];a[j+1]=t;
		}
		}
		cout<<a[(n-1)/2]<<endl;
	
	return 0;
}