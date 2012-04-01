#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int i,a,b,c;
	for(i=3;i<=n;i++)
		for(a=2;a<n;a++)
			for(b=a+1;b<n;b++)
				for(c=b+1;c<n;c++)
					if(i*i*i==a*a*a+b*b*b+c*c*c)
						cout<<"Cube = "<<i<<", Triple = ("<<a<<","<<b<<","<<c<<")"<<endl;
					return 0;
}

