#include<iostream>
using namespace std;
int main()
{
	int p,e,i,d,k=0;
	while(cin>>p>>e>>i>>d)
	{
		if(p==-1&&e==-1&&i==-1&&d==-1)break;
		k++;
		int m,n,q,t;
		
		for(m=0;;m++)
			if((m*23+p-e)%28==0)break;
			t=m*23+p;
			for(q=0;;q++)
				if((q*23*28+t-i)%33==0)break;
				t=q*23*28+t;
				if(t==0)t=21252;
				cout<<"Case "<<k<<": the next triple peak occurs in "<<t-d<<" days."<<endl;
				}
	return 0;
}

