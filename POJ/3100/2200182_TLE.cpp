#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int b,n;
	while(cin>>b>>n)
	{
		if(b==0&&n==0)break;
		int i,j,k;
		j=100000000;
		for(i=0;pow(i,n)<1001000;i++)
		{
			if(j>fabs(b-pow(i,n)))
			{
				j=fabs(b-pow(i,n));
				k=i;
			}
		}
		cout<<k<<endl;
	}
	return 0;
}