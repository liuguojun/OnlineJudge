#include<iostream>
using namespace std;
int main()
{
	float c;
	while(cin>>c)
	{
		if(c==0)break;
		float a[1000],b;a[0]=0;
		int i;
		for(i=1;i<1000;i++)
		{b=i+1;
		a[i]=a[i-1]+1/b;
		}
		for(i=0;i<1000;i++)
			if(a[i]<c&&a[i+1]>c)
				cout<<i+1<<" card(s)"<<endl;
	}
	return 0;
}
