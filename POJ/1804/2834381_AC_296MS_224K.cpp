#include<iostream>
using namespace std;
int main()
{
	int k,t=0;
	cin>>k;
	while(k--)
	{t++;
	int a[1005],n,i,j,sum=0,temp;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				sum++;
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
			cout<<"Scenario #"<<t<<":"<<endl<<sum<<endl<<endl;
				}
	return 0;
}


