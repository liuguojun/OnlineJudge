#include<iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	t=n;
	while(n--)
	{
		cout<<"Scenario #"<<t-n<<":"<<endl;
		
		int a,b,left=0,right=0;
		cin>>a>>b;
		if(a==1)cout<<"0 "<<b-1<<endl;
		else if(b==1)cout<<a-1<<" 0"<<endl;
		else {
			while(a!=1&&b!=1)
			{
				if(a>b)
				{
					left+=a/b;
					a=a%b;
				}
				else {
					right+=b/a;
					b=b%a;
				}
			}
			if(a==1&&b!=1)right+=b-1;
			else if(a!=1&&b==1)left+=a-1;
			cout<<left<<" "<<right<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}
