#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int m,t;
	cin>>m;
	for(t=1;t<=m;t++)
	{
		double r,n,k,z;cin>>r>>n;
		z=3.141592653/n;
		k=1+sin(z);
		
		cout<<"Scenario #"<<t<<":"<<endl;
cout<< setprecision(3) << setiosflags(ios::fixed) <<r*sin(z)/k<<endl<<endl;
	}
	return 0;
}



