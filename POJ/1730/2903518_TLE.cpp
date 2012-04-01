#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		int i,j,max=1;
		double k,m;
		for(i=1;;i++)
		{
			k=1.0/i;
			m=pow(n,k);
			if(m>1&&m<2)break;
			j=int(m);
if(m-j<1e-12||j+1-m<1e-12) max=i<max?max:i;
		}
		cout<<max<<endl;
	}
	return 0;
}