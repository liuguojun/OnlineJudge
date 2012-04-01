#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int k,i;
		cin>>k;
		for( i=1;;i++)
		{
			if((i*(i-1)/2<=k)&&(i*(i+1)/2>=k))
				break;
		}

			cout<<k-i*(i-1)/2<<endl;
		}

		return 0;
	}