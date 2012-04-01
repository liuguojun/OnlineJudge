#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double b,n;
	while(cin>>b>>n)
	{
		if(b==0&&n==0)break;
		int i;
		i=(int)pow(b,1.0/n);
			if(fabs(pow(i,n)-b)>fabs(b-pow(i+1,n)))
				cout<<i+1<<endl;
			else cout<<i<<endl;
	}
	return 0;
}