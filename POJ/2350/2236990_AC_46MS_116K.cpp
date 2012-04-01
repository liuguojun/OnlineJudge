#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t,a[1005];
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		double sum=0,j=0;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
				sum+=a[i];
			}
			sum=sum/n;
			for(i=0;i<n;i++)
				if(a[i]>sum)j++;
				cout<< setprecision(3) 
<< setiosflags(ios::fixed) 
<<j/n*100<<"%"<<endl;
				}
	return 0;
}

		