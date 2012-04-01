#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int k,i,j;
		cin>>k;
		j=1+sqrt(1+8*k);
		for( i=j/2-2;;i++)
		{
			if((i*(i-1)/2<k)&&(i*(i+1)/2>=k))
				break;
		}

			cout<<k-i*(i-1)/2<<endl;
		}

		return 0;
	}