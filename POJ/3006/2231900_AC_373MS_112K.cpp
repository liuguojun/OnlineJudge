#include<iostream>
#include<cmath>
using namespace std;
bool check(int m)
{
	int i,k;
	k=sqrt(m);
	if(m==1)return false;
	for(i=2;i<=k;i++)
		if(m%i==0)break;
		if(i==k+1)return true;
		else return false;
}
int main()
{
	int a,b,c,k;
	while(cin>>a>>b>>c)
	{
		int t=0;
		if(a==0&&b==0&&c==0)break;
		while(t!=c)
		{
			if(a==2){t++;k=a;}
			else if(a%2!=0)
			{
				if(check(a))
				{
					t++;
					k=a;
				}
			}
			a=a+b;
		}
		cout<<k<<endl;
	}
	return 0;
}


