#include<iostream>
using namespace std;
int main()
{
	int b,c;double a;
	while(cin>>a>>b>>c)
	{int q=0,w=0,e=0;
		if(a==0&&b==0&&c==0)break;
	 if(a<=4.5&&b>=150&&c>=200)
	 {cout<<"Wide receiver"<<" ";q=1;}
	
	if(a<=6.0&&b>=300&&c>=500)
	{
		cout<<"Lineman"<<" ";w=1;}
if(a<=5.0&&b>=200&&c>=300)
{cout<<"Quarterback"<<" ";e=1;}
if(q==0&&w==0&&e==0) cout<<"No positions";
cout<<endl;
	}
	return 0;
} 

