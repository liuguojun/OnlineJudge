#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,a[10001],m,i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
	while(m--)
	{
		int l=100000,flag=0,temp,flag1=0;
		for(i=n;i>1;i--)
			if(a[i-1]<a[i])
			{
				flag=1;
				k=i-1;
				break;				
			}

			if(flag==0)
			{
				for(i=1;i<=n;i++)
			a[i]=i;				
			}
			else 
			{
				for(i=k;i<=n;i++)
				{
					if(a[i]>a[k]&&l>a[i])
					{
						l=a[i];
						j=i;
						flag1=1;
						
					}
				}
				
					if(flag1==1)
					{
						temp=a[k];
						a[k]=a[j];
						a[j]=temp;
					}
				

				for(i=k+1;i<=(n+k+1)/2;i++)
				{
					temp=a[i];
					a[i]=a[n+k+1-i];
					a[n+k+1-i]=temp;
				}
			}
			
		
	}
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	}
	return 0;
}

