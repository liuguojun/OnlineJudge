#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		int n,i,j;
		cin>>n;
		if(n==1)cout<<"1"<<endl;
		else {
			j=sqrt(1+8*n);
			i=(j-1)/2;
			while(1)
			{
				
				if(n>i*(i+1)/2&&n<=(i+1)*(i+2)/2)
				{
					cout<<n-i*(i+1)/2<<endl;
					break;
				}
				else if(n>(i+1)*(i+2))
					i++;
				else i--;
			}
		}
	}
	return 0;
}

