#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a,b;
	double t;
	while(cin>>n)
	{
		t=(-1+sqrt(1+2*n*4))/2.0;
		if(t-int(t)==0)
			a=t;
		else a=int(t)+1;
		b=n-a*(a-1)/2-1;
		if(a%2==0)
			cout<<"TERM "<<n<<" IS "<<1+b<<"/"<<a-b<<endl;
		else cout<<"TERM "<<n<<" IS "<<a-b<<"/"<<1+b<<endl;
	}
return 0;
}


